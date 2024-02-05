#include <iostream>
#include <algorithm>
using namespace std;

void strSort(string &str) {
    sort(str.begin(), str.end());
}

int main() {
    string str;
    cin >> str;

    strSort(str);
    cout << str << endl;

    return 0;
}
