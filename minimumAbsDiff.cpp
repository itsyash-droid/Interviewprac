#include <bits/stdc++.h>

using namespace std;

int func(vector<int> &a) {
    sort(a.begin(), a.end());
    int minX = INT_MAX;
    
    for (int i = 1; i < a.size(); i++) {
        minX = min(minX, a[i] - a[i - 1]);
    }
    
    return minX;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<func(a);
    
    return 0;
}