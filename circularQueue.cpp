#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int Rear;
    int *Q;
};

void enqueue(struct Queue *q, int x)
{
    if ((q->Rear + 1) % q->size == q->front)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->Rear = (q->Rear + 1) % q->size;
        q->Q[q->Rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if (q->front == q->Rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

int main()
{
    return 0;
}
