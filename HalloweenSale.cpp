#include<bits/stdc++.h>

using namespace std;

int func(int p, int d, int m, int s) {
    int count = 0;
    while (s >= p) {
        s -= p;
        p = max(p - d, m);
        count++;
    }
    return count;
}

int main(){
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    cout<<func(p,d,m,s);

    return 0;
}