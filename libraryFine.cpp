#include <bits/stdc++.h>

using namespace std;

int func(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 <= d2)) {
        return 0;
    }
    if (y1 > y2) {
        return 10000;
    }
    if (m1 > m2) {
        return 500 * (m1 - m2);
    }
    return 15 * (d1 - d2); 
}

int main() {
    int d1, m1, y1;
    int d2, m2, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    cout << func(d1, m1, y1, d2, m2, y2);
    return 0;
}
