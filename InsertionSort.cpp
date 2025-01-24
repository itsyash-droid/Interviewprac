#include <bits/stdc++.h>
using namespace std;

void func(vector<int> a) { // Passed by value, so original array in main remains unchanged
    for (int i = a.size() - 1; i >= 0; i--) {
        int temp = a[i];
        int j = i - 1;

        // Shift larger elements right
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];  // Shifting element
            j--;

            // Print array after every shift
            for (int k : a) {
                cout << k << " ";
            }
            cout << endl;
        }

        // Insert temp at the correct position
        a[j + 1] = temp;
    }
    for (int k : a) {
                cout << k << " ";
            }
            cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    func(a);
}
