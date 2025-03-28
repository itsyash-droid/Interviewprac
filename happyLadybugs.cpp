#include <bits/stdc++.h>

using namespace std;

string ladybug(vector<char> b){
    unordered_map<char,int> freq;
    bool isempty = false;
    for(char c:b){
        freq[c]++;
        if(c == '_') isempty = true;
    }

    for(auto it: freq){
        if(isalpha(it.first) && it.second == 1){
            return "NO";
        }
    }
    if(!isempty){
    for(int i= 1;i<b.size()-1;i++){
        if(b[i] != b[i-1] && b[i] != b[i+1]){
            return "NO";
        }
    }
    }
    return "YES";
}

int main(){
    int g;
    cin>>g;
    while(g--){
        int n;
        cin>>n;
        vector<char> b(n);
        for(int i =0;i<n;i++){
            cin>>b[i];
        }
        cout<<ladybug(b)<<endl;
    }

    return 0;
}