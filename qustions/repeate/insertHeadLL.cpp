#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void printLikedList(Node* &head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data;
        if(temp->next != nullptr){
            cout<<" -> ";
        }
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node = new Node(10);


    Node* head  = node;
    printLikedList(head);

    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 11);

    printLikedList(head);
    return 0;
}