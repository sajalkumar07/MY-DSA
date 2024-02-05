#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int getMini(int arr[], int n){
    int mini = arr[0];
    for(int i=0; i<n; i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int size;
    cin>>size;

    int arr [5];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<getMax(arr,size)<<endl;
    cout<<getMini(arr,size)<<endl;
}