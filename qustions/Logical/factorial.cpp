#include <iostream>
using namespace std;

int main(){
    int n,factorial=1;
    cout<<"enter a number : ";
    cin>>n;

    if(n<0){
        cout<<"can not find the number on negitive number"<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            factorial = factorial*i;
            cout<<i<<" ";  
        }
        cout<<endl<<"here is youre factorial : "<<factorial<<endl;
    }
    return 0;
}