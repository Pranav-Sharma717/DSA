// #include <iostream>
// using namespace std;

// // Definition for singly-linked list.
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x) : data(x), next(nullptr) {}
// };

// // Function to reverse every k nodes in a linked list
// Node *reverseKGroup(Node *head, int k)
// {
//     if (!head || k == 1)
//         return head;

//     Node dummy(0);
//     dummy.next = head;
//     Node *prevGroupEnd = &dummy;
//     Node *current = head;
//     Node *next = nullptr;

//     int length = 0;
//     while (current)
//     {
//         length++;
//         current = current->next;
//     }

//     current = head;
//     for (int count = 0; count < length / k; ++count)
//     {
//         Node *groupStart = current;
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
#include <iostream>
using namespace std;

// Definition of the Node structure
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

// Class definition for the Binary Search Tree
class BinarySearchTree
{
private:
    Node *root;

    // Helper function for insertion
    Node *insert(Node *node, int value)
    {
        if (node == nullptr)
            return new Node(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }

    // Helper function for searching
    Node *search(Node *node, int value)
    {
        if (node == nullptr || node->data == value)
            return node;

        if (value < node->data)
            return search(node->left, value);
        else
            return search(node->right, value);
    }

    // Helper function for in-order traversal
    void inOrder(Node *node)
    {
        if (node == nullptr)
            return;

        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

public:
    // Constructor to initialize the root
    BinarySearchTree()
    {
        root = nullptr;
    }

    // Function to insert a value
    void insert(int value)
    {
        root = insert(root, value);
    }

    // Function to search for a value
    bool search(int value)
    {
        return search(root, value) != nullptr;
    }

    // Function to perform in-order traversal
    void inOrder()
    {
        inOrder(root);
        cout << endl;
    }
};

int main()
{
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "In-order traversal: ";
    bst.inOrder();

    int key = 40;
    if (bst.search(key))
        cout << key << " found in the BST." << endl;
    else
        cout << key << " not found in the BST." << endl;

    key = 100;
    if (bst.search(key))
        cout << key << " found in the BST." << endl;
    else
        cout << key << " not found in the BST." << endl;

    return 0;
}
