#include<iostream>
using namespace std;

int pivotElement(int arr[],int size){
    int start = 0;
    int end = size - 1;

    while(start<end){
        int mid = start + (end-start)/2; 
        if (arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return end;
}

int main() {
    int arr[6]={22,55,66,5,1,8} ;
    cout<<pivotElement(arr,6);
    return 0;
    }