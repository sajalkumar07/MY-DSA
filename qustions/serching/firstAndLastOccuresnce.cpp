#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start<=end){
        // Find the middle element
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1; 
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}


int LastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start<=end){
        // Find the middle element
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1; 
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[8]={1,2,3,3,3,3,4,5};
  
    cout<<"index : "<<firstOccurence(arr,8,3)<<endl;
    cout<<"index : "<<LastOccurence(arr,8,3)<<endl;
  
    return 0;
}