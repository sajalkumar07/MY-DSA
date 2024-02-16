#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag = false;

    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"number is non prime"<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"number is prime"<<endl;
    }
}