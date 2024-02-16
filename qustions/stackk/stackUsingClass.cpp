#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top >= 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow";
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack udnerFlow";
        }
    }

    int peek(){
        if(top>=0 && top<=size){
            return arr[top];
        }
        else{
            cout<<"stack is empty   ";
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);

    st.push(44);
    st.push(52);
    st.push(21);

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;
    
    if(st.isEmpty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }
}