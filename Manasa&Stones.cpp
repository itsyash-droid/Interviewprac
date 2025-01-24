#include <bits/stdc++.h>

using namespace std;

vector<int> stones(int n,int a,int b){
    set<int> result;
    for(int i=0;i<n;i++){
        result.insert(i*a + (n-1-i)*b);
    }    
    return vector<int>(result.begin(),result.end());
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int n,a,b;
        cin >>n >>a >>b;
        vector<int> result = stones(n,a,b);
        for(int num: result){
            cout <<num <<" ";
        }
        cout<< endl;
    }
    return 0;
}