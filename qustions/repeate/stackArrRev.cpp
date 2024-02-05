#include <iostream>
#include <stack>
using namespace std; 

void stackArrReverse(int arr[], int size){
    stack<int>s;

    for(int i=0; i<size; i++){
        s.push(arr[i]);
    }

    for(int i=0; i<size; i++){
        arr[i]=s.top();
        s.pop();
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    stackArrReverse(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}