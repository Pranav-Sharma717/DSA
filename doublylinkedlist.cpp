#include <iostream>
using namespace std;
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

Node *create(int arr[], int n)
{
    if (n == 0)
        return nullptr;
    Node *head = new Node{nullptr, arr[0], nullptr};
    Node *last = head;
    for (int i = 1; i < n; ++i)
    {
        Node *temp = new Node{last, arr[i], nullptr};
        last->next = temp;
        last = temp;
    }
    return head;
}

void display(Node *head)
{
    Node *p = head;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void insert(Node *&head, int index, int value)
{
    Node *temp = new Node{nullptr, value, nullptr};
    if (index == 0)
    {
        temp->next = head;
        if (head)
            head->prev = temp;
        head = temp;
        return;
    }
    Node *p = head;
    for (int i = 0; i < index - 1 && p; ++i)
        p = p->next;
    if (!p)
        return;
    temp->next = p->next;
    temp->prev = p;
    if (p->next)
        p->next->prev = temp;
    p->next = temp;
}

void remove(Node *&head, int index)
{
    if (!head)
        return;
    Node *p = head;
    if (index == 0)
    {
        head = head->next;
        if (head)
            head->prev = nullptr;
        delete p;
        return;
    }
    for (int i = 0; i < index && p; ++i)
        p = p->next;
    if (!p)
        return;
    if (p->prev)
        p->prev->next = p->next;
    if (p->next)
        p->next->prev = p->prev;
    delete p;
}

void reverse(Node *&head)
{
    Node *p = head;
    Node *temp = nullptr;
    while (p)
    {
        temp = p->prev;
        p->prev = p->next;
        p->next = temp;
        p = p->prev;
    }
    if (temp)
        head = temp->prev;
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    Node *head = create(A, 5);

    cout << "Original list: ";
    display(head);

    insert(head, 0, 1);
    cout << "After inserting 1 at index 0: ";
    display(head);

    insert(head, 3, 10);
    cout << "After inserting 10 at index 3: ";
    display(head);

    remove(head, 2);
    cout << "After removing element at index 2: ";
    display(head);

    reverse(head);
    cout << "After reversing the list: ";
    display(head);

    return 0;
}