#include <bits/stdc++.h>

using namespace std;

int func(int n,vector<int> a){
     unordered_map<int, int> sockCount;
     for(int i=0;i<n;i++){
        sockCount[a[i]]++;
     }
     int pairs = 0;
     for(auto it : sockCount){
        pairs+=it.second/2;
     }
     return pairs;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    cout<<func(n,a); 
}