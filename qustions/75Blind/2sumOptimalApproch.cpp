#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,target;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter your target : ";
    cin>>target;

    int left = 0, right = n-1;
    sort(arr,arr+n);
    bool found = false;
    while(left<right){
        int current = arr[left]+arr[right];

        if(current == target){
            cout<<"target found";
            found = true;
            break;
        }
        else if(current < target){
            left++;
        }
        else{
            right--;
        }
    }
    if(found == false){
        cout<<"target not found";
    }
    return 0;

}