#include<iostream>
using namespace std;

int main(){
    string str1;
    cin>>str1;

    string str2;
    cin>>str2;

    if(str1.length()!=str2.length()){
        cout<<"no its not";
    }
    else{
        string temp = str1+str2;
        if(temp.find(str2)!=string::npos){
            cout<<"yes it is";
        }
        else cout<<"no its";
    }
    return 0;
}