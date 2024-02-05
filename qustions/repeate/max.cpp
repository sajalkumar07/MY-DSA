#include <iostream>
using namespace std;

int max(int arr[], int n){
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"max : "<<max(arr,n);
    return 0;   
}

