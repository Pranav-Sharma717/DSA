#include <iostream>
using namespace std;

class Deque
{
private:
    int *arr;
    int size;
    int front;
    int rear;

public:
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Deque()
    {
        delete[] arr;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (front == 0 && rear == size - 1) || (front == rear + 1);
    }

    void insertFront(int value)
    {
        if (isFull())
        {
            cout << "Deque is full!\n";
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }

        arr[front] = value;
    }

    void insertRear(int value)
    {
        if (isFull())
        {
            cout << "Deque is full!\n";
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = value;
    }

    int deleteFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!\n";
            return -1;
        }

        int value = arr[front];

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }

        return value;
    }

    int deleteRear()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!\n";
            return -1;
        }

        int value = arr[rear];

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }

        return value;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!\n";
            return;
        }

        cout << "Deque contents: ";
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % size;
        }
        cout << "\n";
    }
};

int main()
{
    int n;
    cout << "Enter the size of the deque: ";
    cin >> n;

    Deque dq(n);
    int choice, value;

    while (true)
    {
        cout << "\n1. Insert at front\n";
        cout << "2. Insert at rear\n";
        cout << "3. Delete from front\n";
        cout << "4. Delete from rear\n";
        cout << "5. Display deque\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            dq.insertFront(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            dq.insertRear(value);
            break;
        case 3:
            cout << "Deleted value: " << dq.deleteFront() << "\n";
            break;
        case 4:
            cout << "Deleted value: " << dq.deleteRear() << "\n";
            break;
        case 5:
            dq.display();
            break;
        case 6:
            cout << "Exiting program...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
