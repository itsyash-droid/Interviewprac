#include <bits/stdc++.h>
#include <cstring>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void func(vector<string> cases,vector<string> query,int k,int n){
    for(int i=0;i<k;i++){
        int count=0;
        for(int j=0;j<n;j++){
            int res = query[i].compare(cases[j]);
            if(res == 0){
            count++;
        }
        }
        cout<< count<< endl;
    }
}

int main(){
    int n,k;
    cin >>n;
    vector<string> cases(n);
    for(int i=0;i<n;i++){
        cin>> cases[i];
    }
    cin >>k;
    vector<string> query(k);
    for(int i=0;i<k;i++){
        cin>> query[i];
    }
    
    func(cases,query,k,n);
    return 0;
}