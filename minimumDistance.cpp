#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int minimumDistances(vector<int> a) {
    unordered_map<int, int> lastIndex;
    int minDistance = INT_MAX;

    for (int i = 0; i < a.size(); i++) {
        if (lastIndex.find(a[i]) != lastIndex.end()) {
            int distance = i - lastIndex[a[i]];
            minDistance = min(minDistance, distance);
        }
        lastIndex[a[i]] = i;
    }

    if (minDistance == INT_MAX) {
        return -1;
    } else {
        return minDistance;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << minimumDistances(a) << endl;
    return 0;
}
