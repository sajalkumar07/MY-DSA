#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //sun of all element in array
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=arr[i];
    }
    cout<<"sum of all element in array : "<<ans<<endl;

    //sum off all even element in array
 
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            ans+=arr[i];
        }
    }
    cout<<"sum of all even element in array : "<<ans<<endl;

    //sum of all odd element in array
    for(int i=0; i<n; i++){
        if(arr[i]%2==1){
            ans+=arr[i];
        }
    }
    cout<<"sum of all odd element in array : "<<ans;
    
    return 0;
}