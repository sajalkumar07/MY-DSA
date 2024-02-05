#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverseString(const string& input){
    stack<char>n;
    for(char c: input){
        n.push(c);
    }
    
    string reverseString;
    while(!n.empty()){
        reverseString += n.top();
        n.pop();
    }
    return reverseString;
}

int main(){
    string str;
    cout<<"Enter Your String : ";
    cin>>str;
    string res = reverseString(str);
    cout<<res<<endl;
}