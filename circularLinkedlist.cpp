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
///////////////////////////////////
// Deletion in a linked list
int Delete(struct Node *p, int pos)
{
    Node *q;
    int x;
    if (pos == 1)
    {
        p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        x = head->data;
        if (p == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        p = head;
        for (int i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next; // Fix: update the previous node's next pointer
        x = q->data;
        delete q;
    }
    return x;
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    Display(head);
    Rdisplay(head);
    cout << endl;
    Delete(head, 2);
    Display(head);
    return 0;
}