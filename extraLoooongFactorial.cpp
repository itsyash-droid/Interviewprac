#include <bits/stdc++.h>
using namespace std;

// Function to multiply large numbers stored in a vector
void multiply(vector<int> &result, int num) {
    int carry = 0;

    // Multiply each digit with num and handle carry
    for (int i = 0; i < result.size(); i++) {
        int product = result[i] * num + carry;
        result[i] = product % 10;  // Store last digit
        carry = product / 10;      // Carry forward
    }

    // Handle remaining carry
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to compute factorial using vector
void extraLongFactorial(int n) {
    vector<int> result;
    result.push_back(1);  // Initialize with 1

    for (int i = 2; i <= n; i++) {
        multiply(result, i);
    }

    // Print the result (reverse order)
    reverse(result.begin(), result.end());
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;
}

// Driver Code
int main() {
    int n;
    cin >>n;
    extraLongFactorial(n);
    return 0;
}