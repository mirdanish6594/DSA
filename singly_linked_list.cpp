#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if(*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* last = *head;
    while(last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
}

void printList(Node* node) {
    while(node!= nullptr) {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main() {
    Node* head = nullptr;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);

    cout<<"Linked list: ";
    printList(head);
}