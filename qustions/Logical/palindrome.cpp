#include <iostream>
using namespace std;

int main(){

    int n;
    int num;
    int digit;
    int rev = 0;
    cin>>num;
    n=num;

    while(num!=0){
        digit = num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }

        if(n==rev){
            cout<<"the number is palindrome"<<endl;
        }
        else{
            cout<<"the number is not palindrome"<<endl;
        }
    
}