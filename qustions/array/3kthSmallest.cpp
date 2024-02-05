#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter elements of vecotr : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    int s;
    cout<<"enter kth elements : ";
    cin>>s;
    int kthSmallest = arr[s-1];
    cout<<"the kth element is : "<<kthSmallest<<endl;
    return 0;
}
