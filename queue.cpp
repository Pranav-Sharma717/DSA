// Using one pointer
#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int rear;
    int capacity;
    int count;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        rear = -1;
        count = 0;
    }

    void enqueue(int x)
    {
        if (count == capacity)
        {
            cout << "Queue Overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        count++;
    }

    int dequeue()
    {
        if (count == 0)
        {
            cout << "Queue Underflow\n";
            return -1;
        }
        int front = (rear - count + 1 + capacity) % capacity;
        int value = arr[front];
        count--;
        return value;
    }

    void display()
    {
        if (count == 0)
        {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = 0; i < count; i++)
        {
            int index = (rear - count + 1 + i + capacity) % capacity;
            cout << arr[index] << " ";
        }
        cout << "\n";
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(50);
    q.enqueue(30);
    q.display();
    cout << "Dequeued: " << q.dequeue() << "\n";
    q.display();
    return 0;
}