#include <iostream>
using namespace std;

int armstrong(int num){
    int originalNum = num;
    int sum = 0;

    while(num>0){
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum == originalNum;

}

int main(){
    int num;
    cin>>num;

    if (armstrong(num)){
        cout<<num<<" number is armstrong"<<endl;
    }
    else{
        cout<<num<<" number is not armstrong"<<endl;
    }
    return 0;
}