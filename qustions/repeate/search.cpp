#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int nums;
    cin>>nums;
    bool found = false;
    for(int i=0; i<nums; i++){
        if(nums==arr[i]){
            found = true;
        }
    }
    if(found == true){
        cout<<"Found ";
    }
    else{
        cout<<"Failed to find";
    }
    return 0;
}