#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Enqueue: Add element at rear
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued to queue\n";
    }

    // Dequeue: Remove element from front
    void dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty! Cannot dequeue.\n";
            return;
        }
        Node *temp = front;
        cout << temp->data << " dequeued from queue\n";
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
    }

    // Display queue elements
    void display()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue: ";
        Node *current = front;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    ~Queue()
    {
        while (front != nullptr)
        {
            dequeue();
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.display();

    return 0;
}