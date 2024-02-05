#include <iostream>
using namespace std;

int containDuplicate(int arr[], int size){

    for(int i=0; i<size-1; i++){
        for(int j=1; j<size; j++){
            if(arr[i]==arr[j]){
                return true;
            }  
        }
    } 
   return false;
}

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];

    cout<<"Enter array Element : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    
    if(containDuplicate(arr, size)){
        cout<<"duplicate found";
    }
    else{
        cout<<"no duplicate found";
    }
    return 0;
}