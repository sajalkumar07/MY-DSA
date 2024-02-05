#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int k;
    std::cout << "Enter the value of K: ";
    std::cin >> k;

    if (k >= 1 && k <= n) {
        std::sort(arr.begin(), arr.end());
        int kthLargest = arr[n - k];
        std::cout << "The " << k << "th largest element is: " << kthLargest << std::endl;
    } else {
        std::cout << "Invalid value of K. Must be between 1 and the array size." << std::endl;
    }

    return 0;
}
