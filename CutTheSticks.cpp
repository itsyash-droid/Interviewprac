/*You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left*/

#include <bits/stdc++.h>

using namespace std;

/*Passing by reference is used to avoid making a copy of the vector, which can be an expensive operation in terms of both time and memory, especially for large vectors. When you pass by reference, the function operates directly on the original vector, which is more efficient.
If you pass by value, the function will create a copy of the vector, which involves allocating memory and copying all the elements from the original vector to the new one. This can significantly slow down your program and increase its memory usage.*/

int findMin(const vector<int>& a) {
    return *min_element(a.begin(), a.end());
}

void func(vector<int> a) {
    while (!a.empty()) {
        int minVal = findMin(a);
        
        // Subtract minVal from all elements
        for (int &num : a) {
            num -= minVal;
        }

        // Print the size before removing zeros
        cout << a.size() << endl;

        // Remove all zero elements
        a.erase(remove(a.begin(), a.end(), 0), a.end());
        /*vector<int> a = {1, 0, 2, 0, 3, 4, 0, 5};
        step_1: remove(a.begin(), a.end(), 0)
            {1, 2, 3, 4, 5, ?, ?, ?}
        step_2: a.erase(..., a.end())
            erase removes everything from the returned iterator (remove(...)) to a.end().*/
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    func(a);
    return 0;
}
