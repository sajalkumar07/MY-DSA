#include <iostream>
using namespace std;

int search(int arr[], int size, int n){
    for(int i=0; i<size; i++){
        if(n==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n;
    cin>>n;
    int found=search(arr, 5, n);
    if(found){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    return 0;
}