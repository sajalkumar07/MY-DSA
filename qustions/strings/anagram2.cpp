#include <iostream>
using namespace std;

int isAnagram(string str1, string str2){

    if (str1.length()!=str2.length()){
        return false;
    }

    int len = str1.length();
    for(int i=0; i<len; i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;


    if (isAnagram(str1,str2)){
        cout<<"yes it is anagram!"<<endl;
    }
    else{
        cout<<"no it is anagram!"<<endl;
    }
    return 0;
}