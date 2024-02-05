#include <iostream>
#include <algorithm>
using namespace std;

void removeDupli(int arr[], int &n) {
    if (n <= 1) {
        return;  // No duplicates to remove
    }

    // Sort the array
    sort(arr, arr + n);

    // Traverse the sorted array to remove duplicates
    int writeIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[writeIndex]) {
            arr[++writeIndex] = arr[i];
            
        }
    }

    n = writeIndex + 1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    removeDupli(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
