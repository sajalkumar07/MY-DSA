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
    bool found = true;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            found = false;
        }
    }
    if(found == true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}