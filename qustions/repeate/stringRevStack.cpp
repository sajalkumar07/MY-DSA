#include <iostream>
#include <stack>
#include <string>
using namespace std;

string revString(const string& input){
    stack<char>charStack;
    for(char c : input){
        charStack.push(c)  ;
    }

    string revString;
    while(!charStack.empty()){
        revString += charStack.top();
        charStack.pop();
    }
    return revString;
}

int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;

    string finalOutput = revString(str);
    cout<<finalOutput;
}
