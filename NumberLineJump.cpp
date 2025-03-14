#include <bits/stdc++.h>

using namespace std;

string func(int x1, int x2, int v1, int v2) {
    if (v1 == v2) {
        return (x1 == x2) ? "YES" : "NO";
    }
    
    if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) >= 0) {
        return "YES";
    }

    return "NO";
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << func(x1, x2, v1, v2) << endl;
    
    return 0;
}
