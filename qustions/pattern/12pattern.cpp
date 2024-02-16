#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 0; i < rows; ++i) {
        int num = 1;

        // Print leading spaces
        for (int j = 0; j < rows - i - 1; ++j)
            cout << " ";

        // Print numbers
        for (int j = 0; j <= i; ++j) {
            cout << num;
            if(j!=0 && j!=i)
                num += 1;
            cout<<"";
        }
        // Print mirrored half
        for (int j = i - 1; j >= 0; --j) {
            cout << num;
            num -= 1;
            if(j!=0)
                cout<<"";
        }
        cout << endl;
    }

    return 0;
}
