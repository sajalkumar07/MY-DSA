#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>box;

    box.push(1);
    box.push(2);
    box.push(3);
    box.push(4);

    box.pop();

    cout << box.top() << endl;

    if(!box.empty()){
        cout<<"stack is not empty"<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }

    return 0;
}