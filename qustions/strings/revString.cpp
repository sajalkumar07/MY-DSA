#include <iostream>
using namespace std;

string revString(string name, int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
    return name;
}


// string revString(string str){

//     int n  = str.length();

//     for(int i=0; i<n/2; i++){
//         swap(str[i], str[n-i-1]);
//     }
//     return str;
// }

int main(){
    
    string str;
    cin>>str;

    int n = str.length();

    str=revString(str, n);
    cout<<str<<endl;
    return 0;
}