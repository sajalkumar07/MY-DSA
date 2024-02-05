#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Enter the height: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        
        for (int j = 0; j <= height - i; j++) {
            cout << " ";
        }

       
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = height; i >= 1; i--) {
   
        for (int j = 0; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
