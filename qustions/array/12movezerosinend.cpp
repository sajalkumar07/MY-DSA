#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int nonzeros = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {  
            swap(arr[i], arr[nonzeros]);
            nonzeros++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
