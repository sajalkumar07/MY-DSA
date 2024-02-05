#include <iostream>
#include <algorithm>
using namespace std;

string checkTheStringPalindrome(string str){
  
    string reverseCheck = str;
    reverse(reverseCheck.begin(), reverseCheck.end());

    return reverseCheck = str;
}

int main(){
    string str;
    cin>>str;

    string res = checkTheStringPalindrome(str);
    if(res==str){
        cout<<"yes it is";
    }
    else{
        cout<<"no it is";
    }
}