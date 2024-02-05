#include <iostream>
#include <string>
using namespace std;

string replaceChar(string str){
    string result = str;
    for(int i=0; i<str.length(); i++){
        if(result[i] == 'a'){
            result[i]='b';
        }
        else if(result[i]=='p'){
            result[i]='q';
        }
        else if(result[i]=='z'){
            result[i]='a';
        }
    }
    return result;
}
int main(){
    string str;
    cin >> str;

    string replaceStr = replaceChar(str);
    cout << replaceStr << endl;
}
