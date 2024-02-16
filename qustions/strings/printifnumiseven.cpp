#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string str[]={"zero","two","four","six","eight"};
    if(num%2==0 && num>=0 && num<=8){
        cout<<str[num/2];
    }
    else{
        cout<<"null";
    }
    return 0;
}