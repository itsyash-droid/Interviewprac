#include <bits/stdc++.h>

using namespace std;

void MinMax(vector<int> a){
    long minCount = 0;
    long maxCount = 0;
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()-1;i++){
        minCount += a[i];
        maxCount += a[i+1];
    }
    cout<< minCount<<" "<<maxCount<<endl;
}

int main(){
    int n = 5;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    MinMax(a);
    return 0;
}