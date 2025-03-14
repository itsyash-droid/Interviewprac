#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateLeft(vector<int>& arr, int d) {
    int n = arr.size();
    // Reverse the first 'd' elements
    reverse(arr.begin(), arr.begin() + d);
    // Reverse the rest of the array
    reverse(arr.begin() + d, arr.end());
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    rotateLeft(arr, d);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
