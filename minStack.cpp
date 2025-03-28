#include <bits/stdc++.h>

using namespace std;

int getmin_push(int data,stack<int> st,int mini){
    if(st.empty()){
        mini = data;
        st.push(data);
    }
    else{
        if(data > mini){
            st.push(data);
        }
        else{
            st.push(2*data - mini);
            mini = data;
        }
    }
    return mini;
}


int main(){
    int res = 0;
    stack<int> st;
    int mini = INT_MAX;
    int size;
    cin>>size;
    while(size--){
    int data;
    cin>>data;
    res = getmin_push(data,st,mini);
    }
    cout<<res;
}