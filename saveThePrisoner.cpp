#include <bits/stdc++.h>
using namespace std;

int func(int n, int m, int s) {
    return ((s - 1 + m - 1) % n) + 1;
    //it easy to use modulo on 0 based indesx so we are using s - 1. since we subtracted -1 from s we have to subtract 1 from m too.
    //To convert back to 1 based index we used +1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, s;
        cin >> n >> m >> s;
        cout << func(n, m, s) << endl;
    }
    return 0;
}
