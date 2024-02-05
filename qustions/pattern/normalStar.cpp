#include <iostream>
using namespace std;

int mai(){
    int n;
    cout<<"enter size of star : ";
    cin>>n;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            cout<<" * "<<endl;
        }
    }
    return 0;
}