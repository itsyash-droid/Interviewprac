#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> climbingLeaderboard(vector<int>& ranked, vector<int>& player) {
    vector<int> ranks;
    vector<int> uniqueRanked;

    // Remove duplicates from the ranked array to create uniqueRanked
    uniqueRanked.push_back(ranked[0]);
    for (size_t i = 1; i < ranked.size(); ++i) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanked.push_back(ranked[i]);
        }
    }

    size_t index = uniqueRanked.size() - 1;

    // Compute player ranks
    for (const int& score : player) {
        while (index >= 0 && score >= uniqueRanked[index]) {
            if (index == 0) break;
            --index;
        }
        if (score < uniqueRanked[index]) {
            ranks.push_back(index + 2); // Player gets next rank
        } else {
            ranks.push_back(index + 1); // Player matches current rank
        }
    }

    return ranks;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> ranked(n);
    for (int i = 0; i < n; ++i) {
        cin >> ranked[i];
    }

    cin >> m;
    vector<int> player(m);
    for (int i = 0; i < m; ++i) {
        cin >> player[i];
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    for (const int& rank : result) {
        cout << rank << endl;
    }

    return 0;
}
