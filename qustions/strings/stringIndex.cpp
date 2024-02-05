#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string str;
    // char strArray[3];  // Size of the array is one more than the string for the null-terminator
    cin>>str;
    sort(str.begin(), str.end());

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i];
    }

    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << " (Index " << i << ")" << endl;
    }

    
    
    return 0;
}
