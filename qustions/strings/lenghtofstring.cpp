#include <iostream>
using namespace std;

int length(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter a string : ";
    cin >> name;

    cout<<"length : "<<length(name)<<endl;
    return 0;
}