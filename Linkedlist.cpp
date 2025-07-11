#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

// Function to reverse every k nodes in the linked list
Node *reverseKGroup(Node *head, int k)
{
    if (!head || k == 1)
        return head;

    Node dummy(0);
    dummy.next = head;
    Node *prevGroupEnd = &dummy;
    Node *current = head;
    Node *next = nullptr;

    while (current)
    {
        Node *groupStart = current;

        // Check if there are at least k nodes remaining
        Node *temp = current;
        for (int i = 0; i < k; ++i)
        {
            if (!temp)
                return dummy.next;
            temp = temp->next;
        }

        // Reverse k nodes
        Node *prev = nullptr;
        for (int i = 0; i < k; ++i)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        // Connect reversed group to previous part
        prevGroupEnd->next = prev;
        groupStart->next = current;
        prevGroupEnd = groupStart;
    }

    return dummy.next;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    int k = 2;
    cout << "Original list: ";
    printList(head);

    head = reverseKGroup(head, k);

    cout << "Reversed list in groups of " << k << ": ";
    printList(head);

    return 0;
}