#include <bits/stdc++.h>

using namespace std;

int flippingBits(unsigned int n){
    return ~n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned int n;
        cin>>n;
        cout<<flippingBits(n)<<endl;
    }
    return 0;
}