#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int k,vector<int> c){
    sort(c.rbegin(),c.rend());
    int totalCost=0;
    for(int i=0;i<c.size();i++){
        totalCost+=(i/k + 1)*c[i];
    }
    return totalCost;
}

int main(){
    int n,k;
    cin >>n >>k;
    vector<int> c(n);
    for(int i=0;i<n;i++){
        cin >>c[i];
    }
    cout <<getMinimumCost(k,c)<<endl;
    return 0;
}