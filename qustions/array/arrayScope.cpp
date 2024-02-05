#include<iostream>
using namespace std;

void update(int arr[], int n){
    
    arr[0];
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5]= {2,3,4,5,6};
    update(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}