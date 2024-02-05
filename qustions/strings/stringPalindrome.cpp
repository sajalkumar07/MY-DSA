#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int isPalindrome(string str){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}
int main(){
    string str;
    cin>>str;

    if(isPalindrome(str)){
        cout<<"the string is palindrome"<<endl;
    }
    else{
        cout<<"the string is not palindrome"<<endl;
    }
    return 0;

}
