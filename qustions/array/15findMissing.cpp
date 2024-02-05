#include <iostream>
#include <vector>
using namespace std;

int findMissing(const std::vector<int>& arr, int n) {
    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}

int main() {
    std::vector<int> arr = {1, 2, 4, 5};
    int n = 5;

    int missingNumber = findMissing(arr, n);

    cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}
