#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr(n);

    int target;
    cout<<"enter the target : ";
    cin>>target;

    cout<<"enter the array elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool found = false;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        int low = i+1, high = n-1;

        while(low<high){
            int current = arr[i]  + arr[low] + arr[high];

            if(current == target){
                found = true;
                break;
            }
            else if(current<target){
                low++;
            }
            else {
                high--;
            }
        } 
        if(found){
            break;
        }
    }
    if(found){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}