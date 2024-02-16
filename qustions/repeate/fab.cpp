#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first = 0;
    int second = 1;
    int next;

    for(int i=0; i<n; i++){
        next = first + second;
        first = second;
        second = next;
        cout<<next<<" ";
    }
    return 0;
}