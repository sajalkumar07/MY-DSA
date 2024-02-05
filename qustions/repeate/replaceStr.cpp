#include <iostream>
#include <string>
using namespace std;

string replace(string str){
    string result = str;
    for(int i=0; i<str.length(); i++){
        if(result[i]=='a'){
            result[i]='z';
        }
        if(result[i]=='b'){
            result[i]='q';
        }
        if(result[i]=='c'){
            result[i]='x';
        }
    }
    return result;
}
int main(){
    string str;
    cin>>str;
    string charReplace = replace(str);
    cout<<charReplace<<endl;
}