#include <iostream>
#include <stack>
using namespace std;

bool validParanthesis(string str) {
    int n = str.length();
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < n; i++) {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(') {
            st.push(str[i]);
        } else if (str[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                ans = false;
                break;
            }
        } else if (str[i] == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();
            } else {
                ans = false;
                break;
            }
        } else if (str[i] == '}') {
            if (!st.empty() && st.top() == '{') {
                st.pop();
            } else {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        ans = false;
    }

    return ans;
}

int main() {
    string str = "{[()]}";

    if (validParanthesis(str)) {
        cout << "Valid Parenthesis" << endl;
    } else {
        cout << "Invalid Parenthesis" << endl;
    }

    return 0;
}
