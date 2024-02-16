#include <iostream>
#include <string>

using namespace std;

int maxSubstrings(string s) {
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n - 2; ++i) {
        if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '1') ||
            (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')) {
            ++count;
        }
    }

    return count;
}

int main() {
    string binaryString;
    cout << "Enter a binary string: ";
    cin >> binaryString;

    int result = maxSubstrings(binaryString);
    cout << "Maximum number of substrings containing '011' or '100' with a single bit flipped: " << result << endl;

    return 0;
}
