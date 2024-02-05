#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int value) : data(value), next(nullptr){}        
};

Node* reverseLinkedList(Node* head){
    Node* prev  = nullptr;
    while(head){
        Node* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;    
};

void displayLinkedList(Node* head) {
    while (head) {
       cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original linked list: ";
    displayLinkedList(head);

    head = reverseLinkedList(head);

    cout << "Reversed linked list: ";
    displayLinkedList(head);

    return 0;
}