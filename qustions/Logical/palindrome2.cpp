#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    string numStr = to_string(n);
    string reverseStr = numStr;
    reverse(reverseStr.begin(), reverseStr.end());

    if(numStr==reverseStr){
        cout<<"the number is palindrome!"<<endl;
    }
    else{
        cout<<"the number is not palindrome!"<<endl;
    }
}