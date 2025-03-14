#include <bits/stdc++.h>

using namespace std;

int func(const vector<int>& a, int k) {
    int n = a.size();
    if (k >= n) return 0;  // Prevent out-of-bounds access

    vector<int> temp = a;  // Copy only once
    nth_element(temp.begin(), temp.begin() + k, temp.end()); // Partially sorts up to k
    temp.resize(k); // Trim the vector to size k

    int minInt = *min_element(temp.begin(), temp.end());
    int maxInt = *max_element(temp.begin(), temp.end());

    return maxInt - minInt;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << func(a, k) << endl;
    
    return 0;
}
