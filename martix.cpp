#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int flippingMatrix(vector<vector<int>> matrix) {
    int n = matrix.size() / 2;
    int maxSum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int maxElement = max({
                matrix[i][j],
                matrix[i][2 * n - j - 1],
                matrix[2 * n - i - 1][j],
                matrix[2 * n - i - 1][2 * n - j - 1]
            });
            maxSum += maxElement;
        }
    }

    return maxSum;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(2 * n, vector<int>(2 * n));
        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                cin >> matrix[i][j];
            }
        }
        cout << flippingMatrix(matrix) << endl;
    }
    return 0;
}
