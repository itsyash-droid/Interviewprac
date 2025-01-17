#include <iostream>
#include <cmath>

using namespace std;

int func(int a, int b) {
    int start = ceil(sqrt(a));
    int end = floor(sqrt(b));

    return max(0, end - start + 1);
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << func(a, b) << endl;
    }
    return 0;
}
