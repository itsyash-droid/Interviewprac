#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isKaprekar(int n) {
    long long sq = (long long)n * n;
    string s = to_string(sq);
    int len = s.length();
    int left = (len > 1) ? stoi(s.substr(0, len / 2)) : 0;
    int right = stoi(s.substr(len / 2));
    return (left + right == n);
}

void kaprekarNumbers(int p, int q) {
    vector<int> result;
    for (int i = p; i <= q; i++) {
        if (isKaprekar(i)) {
            result.push_back(i);
        }
    }
    if (result.empty()) {
        cout << "INVALID RANGE";
    } else {
        for (int num : result) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int p, q;
    cin >> p >> q;
    kaprekarNumbers(p, q);
    return 0;
}
