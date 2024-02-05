#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    cout << str;
    return 0;
}
