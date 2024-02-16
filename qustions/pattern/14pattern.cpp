#include<iostream>
using namespace std;
int main()
{
    
    for(int i=1; i<5; i++){
        int count = 1;
        for(int j=1; j<5-i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i-1; k++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}