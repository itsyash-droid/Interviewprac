#include <bits/stdc++.h>

using namespace std;

int func(vector<int> a){
    int max = std::numeric_limits<int>::min();
    unordered_map<int, int> mode;
    for(int i=0;i<a.size();i++){
        mode[a[i]]++;
    }
    for(auto it: mode){
        if(it.second > max){
            max = it.second;
        }
    }
    return (a.size() - max);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<func(a);
}
