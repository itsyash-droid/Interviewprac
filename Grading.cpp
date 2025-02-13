#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<38){
            cout<<a[i]<<endl;
        }
        else{
            int rem = a[i]%5;
            if(5-rem >= 3){
                cout<<a[i]<<endl;
            }
            else if(5-rem < 3){
                cout<<a[i]+(5-rem)<<endl;
            }
        }
    }
    return 0;
}