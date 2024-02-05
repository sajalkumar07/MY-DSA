#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1; 
    int ans  = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    return ans;
    
}
      

int main(){
    int arr[5] = {1,2,3,4,5};
    int index = binarySearch(arr,5,3);
    cout<<"index is :"<<index<<endl;

    return 0;
}