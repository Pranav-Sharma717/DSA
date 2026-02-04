#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front; 
    int rear; 
    int *Q;
};

//front and rear are index pointers

//enqueue

void enqueue(Queue *q, int x){
    if(q->rear==q->size-1){
        cout<<"Queue is full";
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q){
    int x = -1;
    if(q->rear == q->front){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

int main()
{
    struct Queue q;
    cout<<"enter the size"<<endl;
    cin>>q.size;
    q.Q= new  int[q.size];
    q.front=q.rear=-1;
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    int val = dequeue(&q);
    cout<<"Dequeued: "<<val<<endl;
    
    delete[] q.Q;
    return 0;
}