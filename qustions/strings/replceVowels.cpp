#include <iostream>
using namespace std;

string replaceVowelsWithX(string str) {
    string result = str;
    for (char &c : result) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = 'x';
        }
    }
    return result;
}

int main() {
    string str;
    cin >> str;

    string replaceStr = replaceVowelsWithX(str);
    cout << replaceStr << endl;

    return 0;
}
