#include <bits/stdc++.h>
using namespace std;
// Tree node for binary tree
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Tree using a linked list, for that we need to use queue data structure
struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q;
};

void enqueue(Queue *q, Node *x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is full";
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

bool isEmpty(Queue *q)
{
    return q->front == q->rear;
}

Node *dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        return nullptr;
    }
    q->front++;
    return q->Q[q->front];
}

Node *create()
{
    Node *p, *t;
    int x;
    Queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.Q = new Node *[q.size];
    cout << "Enter root value" << endl;
    cin >> x;
    Node *root = new Node;
    root->data = x;
    root->left = root->right = nullptr;
    enqueue(&q, root);
    while (!isEmpty(&q))
    {
        p = dequeue(&q);
        cout << "Enter left child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->left = t->right = nullptr;
            p->left = t;
            enqueue(&q, t);
        }
        cout << "Enter right child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->left = t->right = nullptr;
            p->right = t;
            enqueue(&q, t);
        }
    }
    delete[] q.Q;
    return root;
}

void display(Node *root)
{
    if (!root)
        return;

    Queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.Q = new Node *[q.size];

    enqueue(&q, root);
    while (!isEmpty(&q))
    {
        Node *p = dequeue(&q);
        cout << p->data;
        if (p->left)
        {
            cout << " L:" << p->left->data;
            enqueue(&q, p->left);
        }
        if (p->right)
        {
            cout << " R:" << p->right->data;
            enqueue(&q, p->right);
        }
        cout << endl;
    }

    delete[] q.Q;
}

int main()
{
    Node *root = create();
    cout << "\nTree display (node L:x R:y):" << endl;
    display(root);
    return 0;
}
