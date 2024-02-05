#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool found = false;
    for(int i=0; i<n-1; i++){
       if(arr[i]==arr[i+1]){
            found = true;
            cout<<"number found at index "<<i<<" and "<<i+1<<endl;
            cout<<"and the numbers are "<<arr[i]<<" == "<<arr[i+1]<<endl;
       }
    }
    if(found){
        return true;
    }
    else{
        return false;
    }
return 0;
}
