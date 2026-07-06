#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {

    // Create nodes

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);


    // Print the linked list
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    

    return 0;
}