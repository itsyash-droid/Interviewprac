#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &a) {
    unordered_map<int, int> birdsCount;

    for (int bird : a) {
        birdsCount[bird]++;
    }

    int maxCount = 0, num = INT_MAX;

    for (auto it : birdsCount) {
        if (it.second > maxCount || (it.second == maxCount && it.first < num)) {
            maxCount = it.second;
            num = it.first;
        }
    }

    return num;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int &x : a) {
        cin >> x;
    }

    cout << func(a) << endl;
}
