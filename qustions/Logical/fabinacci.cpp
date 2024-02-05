#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin >> n;

    int first = 0;
    int second = 1;
    int next;

    cout<<"fibnacci number upto : "<<n<<endl; 

    for(int i=0; i<n; i++){
        if(i<=1){
            next = i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
        cout<<next<<" ";
    }
    return 0;

}