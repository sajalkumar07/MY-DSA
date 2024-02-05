#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlter(int arr[], int size){
    for(int i=0; i<size-1; i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp; 
        // swap(arr[i], arr[i+1]);
       
        // if(i+1<size){
        //     swap(arr[i], arr[i+1]);
        // } 
    }
}

int main(){
    int arrOdd[5] = {-23,22,1,4,-4};
    int arrEven[5] = {-60,-70,-2,45,10};


    swapAlter(arrOdd, 5);
    swapAlter(arrEven, 5);
    
    printArray(arrOdd, 5);
    printArray(arrEven, 5);

    return 0;
}