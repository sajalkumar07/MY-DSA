#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sotreNonZeros = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[sotreNonZeros]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}