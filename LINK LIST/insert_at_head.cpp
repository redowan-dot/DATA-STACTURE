#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// Insert at Head
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

// Print Linked List
void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;

    int x;

    // Input until -1
    while (true)
    {
        cin >> x;

        if (x == -1)
            break;

        insert_at_head(head, x);
    }

    print_linked_list(head);

    return 0;
}