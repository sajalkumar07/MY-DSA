#include<iostream>
#include<stack>
using namespace std;

void reverseArray(int arr[] ,int size){
    stack<int>s; 
    for(int i=0; i<size; i++){
        s.push(arr[i]);
    }
    for(int i=0; i<size; ++i){
        arr[i]=s.top();
        s.pop();
    }
}
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];

    cout<<"Enter array Elments: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Original Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr, n);
    cout<<"Reversed Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}