#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int originalNumber = n;
    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n/=10;
    }

    if (n == originalNumber) {
        cout << "Number is Armstrong" << endl;
    } else {
        cout << "Number is not Armstrong" << endl;
    }

    return 0;
}
