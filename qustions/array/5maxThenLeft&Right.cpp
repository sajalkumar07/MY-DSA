#include <iostream>
using namespace std;

int findMaxElement(const int arr[], int n) {
    if (n < 3) {
        cout << "Array should have at least three elements." << endl;
        return -1;
    }

    int leftMax = arr[0];
    int rightMax = arr[n - 1];

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i - 1] > leftMax) {
            leftMax = arr[i - 1];
        }

        if (arr[i] > leftMax && arr[i] > rightMax) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    const int arr[] = {2, 5, 3, 1, 4, 9, 7};
    const int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMaxElement(arr, n);

    if (result != -1) {
        cout << "The element that is maximum from both left and right sides is: " << result<<endl;
    } else {
        cout << "No element found that is maximum from both left and right sides." <<endl;
    }

    return 0;
}
