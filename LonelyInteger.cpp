/*non-standard

#include <bits/stdc++.h>

using namespace std;

int func(vector<int> a) {
    int n = a.size();
    int f = 0;
    sort(a.begin(), a.end());
    int res = -1; // Initialize res to a default value
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n && a[i] != a[i + 1]) {
            res = a[i];
            f = 1;
            break; // Exit the loop once the unique element is found
        }
    }
    if (f == 0) {
        res = a[n - 1]; // If no unique element is found in pairs, the last element is unique
    }
    return res;
}


int main(){
    int n;
    cin>> n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    cout<< func(a);
}


*/

/*standard*/
#include <bits/stdc++.h>

int func(vector<int> a) {
    int n = a.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= a[i];
    }
    return res;
}
