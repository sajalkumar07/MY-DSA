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
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;

    if (node1->next == nullptr) {
        cout << "Next is null." << endl;
    }

    return 0;
}