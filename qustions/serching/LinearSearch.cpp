#include<iostream>
using namespace std;

int search(int arr[], int n, int size){

    for(int i=0; i<size; i++){
        if(n==arr[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]={2,4,5,1,6,8,9,10,3,7};
    int n;
    //bool keyPresent = false;
    cin>>n;

    // for(int i=0; i<10; i++){
    //     if(n==arr[i]){
    //         keyPresent = true;
    //         break;
    //     }
    // }

    int found = search (arr, n, 10);
    if(found){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
    return 0;

}