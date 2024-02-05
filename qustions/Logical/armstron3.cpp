#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int num){
    int originalNum = num;
    int numDigits = to_string(num).length();
    int armstrongSum = 0;

    while(num!=0){
        int digit = num%10;
        armstrongSum += pow(digit, numDigits);
        num/=10;
    }
    return armstrongSum == originalNum;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isArmstrongNumber(n)){
        cout << "Number is an Armstrong number.";
    }
    else{
        cout << "Number is not an Armstrong number.";
    }

    return 0;
}
