#include<iostream>
using namespace std;

int getMax (int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        // maxi = max(maxi, arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
    
}
int getMin (int arr[], int n){
    int mini = arr[0];
    for(int i=0; i<n; i++){
        mini = min(mini, arr[i]);
        // if(arr[i]<min){
        //     min = arr[i];
        // }
    }
    return mini;
    
}
int main() {

    int size;
    cin>>size;

    int arr[5];
    for(int i=0; i<size; i++){   
        cin>>arr[i];
    }

    cout<<"Max : "<<getMax(arr,size)<<endl;
    cout<<"Min : "<<getMin(arr,size)<<endl;
    return 0;
}