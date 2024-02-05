#include <iostream>
using namespace std;

int main(){
    int n,target;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter your target : ";
    cin>>target;

    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i]+arr[i+1]==target){
            cout<<"Target Found at indices "<<i<<"and"<<i+1;
            found = true;
            break;
        } 
        if(found){
            break;
        }
    }
    if(!found){
        cout<<"target not found";
    }
    return 0;
}