/*Key Takeaways:
1.Elements with an odd contribution affect the final XOR result.
2.For even-sized arrays, XOR is always 0 (as seen in the first example).
3.For odd-sized arrays, only elements at even indices contribute to the XOR.
4.(i + 1) * (arr.size() - i) % 2 != 0 gives us the number of contributions*/

#include <iostream>
#include <vector>
using namespace std;

int sansaXor(const vector<int>& arr) {
    int result = 0;

    // Calculate XOR for elements that contribute to an odd number of subarrays
    for (int i = 0; i < arr.size(); ++i) {
        // If the element's contribution is odd
        if ((i + 1) * (arr.size() - i) % 2 != 0) {
            result ^= arr[i];
        }
    }
    return result;
}

int main() {
    int t;  // Number of test cases
    cin >> t;
    while (t--) {
        int n;  // Number of elements in the array
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << sansaXor(arr) << endl;
    }
    return 0;
}