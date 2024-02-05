#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    vector<int>vec(n);
    cout<<"enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    reverse(vec.begin(), vec.end());
    cout<<"after revesrsal : ";
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
    
    return 0;

}