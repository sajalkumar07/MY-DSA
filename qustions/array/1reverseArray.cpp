#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1; 
    while(start<=end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);

        start++;
        end--;
    }     
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arrayOne[5] = {1,2,3,5,6};
    int arrayTwo[6] = {1,2,3,5,6,7};

    cout<<endl;
    cout<<"Before reversing arrayOne : ";
    printArray(arrayOne, 5);
    reverseArray(arrayOne, 5);
    cout << "After reverse arrayOne : ";
    printArray(arrayOne, 5);

    cout<<endl;

    cout<<"Before reversing arrayTwo : "; 
    printArray(arrayTwo, 6);
    reverseArray(arrayTwo, 6);
    cout << "After reverse arrayTwo: ";
    printArray(arrayTwo, 6);
    
    cout<<endl;
    return 0;
}