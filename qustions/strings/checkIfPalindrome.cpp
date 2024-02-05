#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter Your String"<<endl;
    cin>>str;

    string reversedCheck=str;
    reverse(reversedCheck.begin(), reversedCheck.end());

    cout<<"original string is : "<<str<<endl;

    if(reversedCheck==str){
        cout<<"the string is plaindrome!"<<endl;
    }
    else{
        cout<<"the string is not plaindrome!"<<endl;
    }
}