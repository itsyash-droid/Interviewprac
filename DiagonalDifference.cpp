#include <bits/stdc++.h>
using namespace std;

void func(vector<vector<int>> &a) {
    int n = a.size();
    int diagonal_1 = 0;
    int diagonal_2 = 0;

    for (int i = 0; i < n; i++) {
        diagonal_1 += a[i][i];         
        diagonal_2 += a[i][n - 1 - i]; 
    }

   cout<<abs(diagonal_1-diagonal_2);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    func(a);
    return 0;
}
