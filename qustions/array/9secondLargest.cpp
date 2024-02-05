#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int largest = arr[n-1];
    int slargest = - 1;
    for(int i=n-2; i>=0; --i){
        if(arr[i]<largest){
            slargest = arr[i];
            break;
        }
    }
    cout<<slargest;
 
    return 0;
}   