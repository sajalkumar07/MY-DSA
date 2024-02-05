#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    bool found = false;
    int rotatedArray[n];
    for(int i=0; i<n; i++){
        int temp = (i+k)%n;
        rotatedArray[temp] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<rotatedArray[i]<<" ";
    }
    if(found==true){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}