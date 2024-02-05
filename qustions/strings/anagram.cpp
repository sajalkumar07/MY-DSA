#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    //this approch will follow the sorting method to check weather the string is anagram or not
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return str1==str2;
}

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;

    if(isAnagram(str1,str2)){
        cout<<"presnt string is anagram"<<endl;
    }
    else{
        cout<<"present string is not anagram"<<endl;
    }
    return 0;
}