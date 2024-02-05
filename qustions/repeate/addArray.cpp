#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr [n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans=0;
    int even=0;
    int odd=0;

    for(int i=0; i<n; i++){
        ans+=arr[i];
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else if(arr[i]%2==1){
            odd+=arr[i];
        }
    }
    cout<<"sum of all array : "<<ans<<endl;
    cout<<"sum of all even array : "<<even<<endl;
    cout<<"sum of all odd array : "<<odd<<endl;

    return 0;
}