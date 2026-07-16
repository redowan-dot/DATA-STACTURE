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


void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}


void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


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
    Node *tail = NULL;

    int x;

    // Input until -1
    while (true)
    {
        cin >> x;

        if (x == -1)
            break;

        insert_at_tail(head, tail, x);
    }

    int pos, val;
    cin >> pos >> val;

    insert_at_any_position(head, pos, val);

    print_linked_list(head);

    return 0;
}