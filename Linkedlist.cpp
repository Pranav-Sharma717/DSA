#include <iostream>
using namespace std;

// Node structure
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int data) : data(data), next(nullptr) {}
// };

// // Function to reverse every k nodes in the linked list
// Node *reverseKGroup(Node *head, int k)
// {
//     if (!head || k == 1)
//         return head;

//     Node dummy(0);
//     dummy.next = head;
//     Node *prevGroupEnd = &dummy;
//     Node *current = head;
//     Node *next = nullptr;

//     while (current)
//     {
//         Node *groupStart = current;

//         // Check if there are at least k nodes remaining
//         Node *temp = current;
//         for (int i = 0; i < k; ++i)
//         {
//             if (!temp)
//                 return dummy.next;
//             temp = temp->next;
//         }

//         // Reverse k nodes
//         Node *prev = nullptr;
//         for (int i = 0; i < k; ++i)
//         {
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }

//         // Connect reversed group to previous part
//         prevGroupEnd->next = prev;
//         groupStart->next = current;
//         prevGroupEnd = groupStart;
//     }

//     return dummy.next;
// }

// // Function to print the linked list
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6
//     Node *head = new Node(1);
//     head->next = new Node(2);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(4);
//     head->next->next->next->next = new Node(5);
//     head->next->next->next->next->next = new Node(6);

//     int k = 2;
//     cout << "Original list: ";
//     printList(head);

//     head = reverseKGroup(head, k);

//     cout << "Reversed list in groups of " << k << ": ";
//     printList(head);

//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////
// Linked list is created inside a heap
// To define a node, we have to define data and pointer(pointing to the next node).
struct Node
{
    int data;
    Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *p, *last;
    if (n <= 0)
        return;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        p = new Node;
        p->data = A[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

// Recursive Display of a linked list
void Display(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        Display(p->next);
    }
}

void reverseDisplay(struct Node *p)
{
    if (p != NULL)
    {
        reverseDisplay(p->next);
        printf("%d ", p->data);
    }
}

int count(struct Node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
};
int add(struct Node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
int maximum(struct Node *p)
{
    int max = INT16_MIN;
    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
// Optimized search
int search(struct Node *p, int key)
{
    Node *q = NULL;
    int index = 0;
    while (p != NULL)
    {
        if (key == p->data)
        {
            if (q != NULL) // Only update q->next if q is not NULL
            {
                q->next = p->next;
                p->next = first;
                first = p;
            }
            // If q is NULL, p is already at the front
            return index;
        }
        q = p;
        p = p->next;
        index++;
    }
    return -1; // Not found
}
int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    Display(first);
    cout << endl;
    reverseDisplay(first);
    cout << endl;
    cout << count(first);
    cout << endl;
    cout << add(first);
    cout << endl;
    cout << maximum(first);
    cout << endl;
    cout << search(first, 10);
    return 0;
}
