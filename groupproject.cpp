#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *reverseKGroup(struct Node *head, int k)
{
    if (!head || k == 1)
        return head;

    struct Node dummy;
    dummy.next = head;
    struct Node *prevGroupEnd = &dummy;
    struct Node *current = head;
    struct Node *next = NULL;
    int count = 0;
    while (current)
    {
        count++;
        struct Node *groupStart = current;

        struct Node *temp = current;
        for (int i = 0; i < k; i++)
        {
            if (!temp)
                return dummy.next;
            temp = temp->next;
        }

        struct Node *prev = NULL;
        for (int i = 0; i < k; i++)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        prevGroupEnd->next = prev;
        groupStart->next = current;
        prevGroupEnd = groupStart;
    }

    return dummy.next;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{

    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next = createNode(6);
    int k = 3;
    printf("Original List:\n");
    printList(head);
    head = reverseKGroup(head, k);
    printf("Reversed List in Groups of %d:\n", k);
    printList(head);
    return 0;
}
