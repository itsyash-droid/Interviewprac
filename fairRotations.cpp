#include <bits/stdc++.h>
using namespace std;

string fairRations(vector<int> B) {
    int count = 0;
    for (int i = 0; i < B.size(); ++i) {
        if (B[i] % 2 != 0) {
            if (i + 1 < B.size()) {
                B[i]++;
                B[i + 1]++;
                count += 2;
            } else {
                return "NO";
            }
        }
    }
    return to_string(count);
}

int main() {
    int N;
    cin >> N;
    vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    cout << fairRations(B) << endl;
    return 0;
}
