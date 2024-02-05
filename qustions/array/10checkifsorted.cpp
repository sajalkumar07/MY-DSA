#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool sorted = true;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            sorted = false;
        }
    }
    if(sorted==true){
        cout<<"sorted";
    } 
    else{
        cout<<"not sorted";
    }
    return 0;
}