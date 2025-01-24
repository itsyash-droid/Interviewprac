#include <bits/stdc++.h>

using namespace std;

int enegry_calc(int n, int k, vector<int> a) {
    int energy = 100;  
    int i = 0; 

    do {
        i = (i + k) % n; 
        energy -= (a[i] == 0) ? 1 : 3; 
    } while (i != 0); 
    return energy;
}


int main(){
    int n,k;
    cin >>n >>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cout<<enegry_calc(n,k,a);
    return 0;
}