#include <iostream>
using namespace std;

int twoSum(int arr[], int size){
    int target;
    cout<<"Enter Your Target Number :";
    cin>>target;

    bool found = false;
    for(int i=0; i<size; i++){
        for(int j=i-1; j<size; j++){
            if(arr[i]+arr[j]==target){
                found=true;
                break;
            }
        }
        if (!found){
            cout<<"no targt found";
        }
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    twoSum(arr,size);
    cout<<"target number found on index "<<i<<"+"<<j<<endl;
    return 0;
}