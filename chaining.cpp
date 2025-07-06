#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// Simple hash function using modulo 10
int myHash(int key) // Renamed hash to myHash
{
    return key % 10;
}

void SortedInsert(struct Node **H, int x)
{
    struct Node *temp = new Node; // Using 'new' for C++ memory allocation
    temp->data = x;
    temp->next = NULL;

    struct Node *q = NULL;
    struct Node *p = *H;

    // If the list is empty, insert the first node
    if (*H == NULL)
    {
        *H = temp;
    }
    else
    {
        // Traverse the list and insert in sorted order
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        // Insert at the beginning
        if (p == *H)
        {
            temp->next = *H;
            *H = temp;
        }
        // Insert in between or at the end
        else
        {
            temp->next = q->next;
            q->next = temp;
        }
    }
}

// Function to search for a key in the list
struct Node *Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// Insert key into hash table
void Insert(struct Node *H[], int key)
{
    int index = myHash(key);      // Use renamed hash function
    SortedInsert(&H[index], key); // Insert in the corresponding chain
}

int main()
{
    struct Node *HT[10]; // Hash table of 10 slots (chaining)
    struct Node *t;

    // Initialize the hash table
    for (int i = 0; i < 10; i++)
    {
        HT[i] = NULL;
    }

    // Insert some values into the hash table
    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);

    // Search for a value in the hash table
    t = Search(HT[myHash(22)], 22);

    // Check if the value was found
    if (t != NULL)
    {
        cout << "Element found: " << t->data << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}