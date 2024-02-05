#include<iostream>
#include<algorithm>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    // sort(str1.begin(), str1.end());
    // sort(str2.begin(), str2.end());
    // return str1==str2;

    int len = str1.length();
    for(int i=0; i<len; i++){
        if(str1[i]==str2[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;

    if (isAnagram(str1,str2)){
        cout<<"The string is anagram!"<<endl;
    }
    else{
        cout<<"The string is not anagram!"<<endl;
    }

    return 0;
}