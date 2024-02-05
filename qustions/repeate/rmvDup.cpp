#include <iostream>
using namespace std;

int remove(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n-1; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
}
int mian(){
    int arr[5]={1,1,2,3,4};
    remove(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}