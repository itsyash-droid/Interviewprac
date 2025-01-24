#include <bits/stdc++.h>

using namespace std;

void func(vector<int> width,vector<vector<int>> cases,int n,int t){
    for(int k=0;k<t;k++){
        int i = cases[k][0];
        int j = cases[k][1];
        int fit = 1001;
        for(int l=i;l<=j;l++){
        fit = min(fit,width[l]);
        }
        cout <<fit <<endl;
        
}
}

int main(){
    int n,t;
    cin >>n >>t;
    vector<int> width(n);
    vector<vector<int>> cases(t,vector<int>(2));
    for(int i=0;i<n;i++){
        cin >>width[i];
    }
    
    for(int i=0;i<t;i++){
        cin >>cases[i][0] >>cases[i][1];
    }
    
    func(width, cases,n,t);
    return 0;
}
