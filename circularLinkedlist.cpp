#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} *head = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;
    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

// Recursive display
void Rdisplay(struct Node *h)
{
    static int flag = 0;
    if (h != head || flag == 0)
    {
        flag = 1;
        cout << h->data << " ";
        Rdisplay(h->next);
    }
    flag = 0;
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    Display(head);
    Rdisplay(head);
    return 0;
}