#include <iostream>
using namespace std;

void mergeArray(int arr1[], int size1, int arr2[], int size2, int arr3[]){
    int i=0, j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<size1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

int main(){
    int n;
    cout<<"enter size of array one : ";
    cin>>n;

    int arr1[n];
    cout<<"enter the element of array one : ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
   
    int m;
    cout<<"enter size of array two : ";
    cin>>m;

    int arr2[m];
    cout<<"enter the element of array two : ";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    cout<<"merged array : ";
    int x=n+m;
    int arr3[x];
    mergeArray(arr1, n, arr2, m, arr3);
    for(int i=0; i<x; i++){
        cout<<arr3[i]<<" ";
    }
    
    
    return 0;
}