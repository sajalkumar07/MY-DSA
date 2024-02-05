#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "array size: ";
    cin >> n;
    vector<int> a(n);

    int target;
    cout<<"enter target value : ";
    cin >> target;

    cout<<"elemets of array : ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

  

    bool found = false;
    sort(a.begin(), a.end());

    for (int i = 0; i < n ; i++) {
        int left = i, right = n - 1;

        while(left < right) {
            int current = a[i] + a[left] + a[right];

            if (current == target) {
                found = true;
                break;
            } else if (current < target) {
                left++;
            } else {
                right--;
            }
        }

        if (found) {
            break;  
        }
    }

    if (found) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
