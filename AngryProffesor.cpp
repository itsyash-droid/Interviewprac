/*k is a threshold value.
a[n] is the arrivalTimes of respective students
arrivalTime must be lessThan or equal to 0
if the students arrived on time or before is greater than the thershold (NO) class is not canceled and viceversa*/

#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

string angryProffesor(int k,vector<int> a){
    int onTime = count_if(a.begin(),a.end(),[](int t){return (t<=0);});
    return (onTime>=k) ? "NO":"YES";
}

int main(){
    int t,n,k;
    cin >>t;
    while(t--){
        cin >>n >>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        cout <<angryProffesor(k,a);
    }

    return 0;
}