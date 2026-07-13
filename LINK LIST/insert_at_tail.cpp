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

// Insert at tail

void insert_at_tail(Node **head, Node **tail, int val)
{
    Node *newNode = createNode(val);

    if (*head == NULL)
    {
        *head = newNode;
        *tail = newNode;
        return;
    }

    (*tail)->next = newNode;
    *tail = newNode;
}

// Print the linked list
void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main()

{
    Node *head = NULL;
    Node *tail = NULL;

    int x;

    // Input until -1
    while (1)
    {
        scanf("%d", &x);

        if (x == -1)
            break;

        insert_at_tail(&head, &tail, x);
    }

    print_linked_list(head);

    return 0;
}