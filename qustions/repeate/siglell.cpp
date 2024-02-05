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
int main(){
    Node* node = new Node(10);
    cout<<node->data<<endl;

    if(node->next==nullptr){
        cout<<"Next is NULL"<<endl;
    }
    return 0;
}