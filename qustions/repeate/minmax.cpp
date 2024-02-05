#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   int maxi = arr[0];
   for(int i=0; i<n; i++){
        maxi = max(maxi,arr[i]);
        // if(arr[i]>max){
        //     max = arr[i];
        // }
    }
    cout<<"max is : "<<maxi<<endl;

   int min = arr[0];
   for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"min is : "<<min;

    return 0;
}