#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isPrime = true;
    if(n<2){
        cout<<"number should be greater than 2";
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<"number is prime";
        }
        else{
            cout<<"number is not prime";
        }
    }
    return 0;
}