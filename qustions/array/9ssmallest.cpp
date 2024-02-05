#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int smallest = arr[0];
    int secondSmallest = arr[1];

    for (int i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    cout << "Second smallest element: " << secondSmallest << endl;
    return 0;
}
