#include <bits/stdc++.h>
using namespace std;

int func(int n, int c, int m) {
    int chocolates = n / c; 
    int wrappers = chocolates;

    while (wrappers >= m) {
        int new_chocolates = wrappers / m; 
        chocolates += new_chocolates;
        wrappers = new_chocolates + (wrappers % m);
    }

    return chocolates;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c, m;
        cin >> n >> c >> m;
        cout << func(n, c, m) << endl;
    }
    return 0;
}
