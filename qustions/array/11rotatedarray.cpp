#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"amout of rotation : ";
    cin>>k;

    int rotatedArray[n];
    for(int i=0; i<n; i++){
        int temp = (i+k)%n;   
        rotatedArray[temp] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<rotatedArray[i]<<" ";
    }
    return 0;
}