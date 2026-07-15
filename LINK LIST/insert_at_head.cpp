#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} Node;

// Create a new node
Node *createNode(int val)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;

    return newNode;
}



int main()
{
    Node *head = NULL;

    int x;

    while (1)
    {
        scanf("%d", &x);

        if (x == -1)
            break;

        insert_at_head(&head, x);
    }

    print_linked_list(head);

    return 0;
}