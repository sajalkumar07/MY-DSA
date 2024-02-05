#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}