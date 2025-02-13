#include <bits/stdc++.h>

using namespace std;

int func(vector<int> a){
    int steps = 0;
    int i = 0;
    while(i<a.size()-1){
        if(i+2<a.size() && a[i+2] != 1){
            steps++;
            i+=2;
        }
        else{
            steps++;
            i++;
        }
    }
    return steps;
}

int main(){
    int n;
    cin >>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<< func(a);
    
    return 0;
}