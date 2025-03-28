#include <bits/stdc++.h>

using namespace std;

void sort_stack(stack<int> &st,stack<int> &st2){
    while(!st.empty()){
        int k = st.top();
        st.pop();
        while(!st2.empty() && st2.top() < k){
            st.push(st2.top());
            st2.pop();
        }
        st2.push(k);
    }
    cout<<"Sorted Stack is:"<<endl;
    while(!st2.empty()){
        cout<<st2.top()<<"--";
        st2.pop();
    }
}

int main(){
    stack<int> st;
    stack<int> st2;
    int n,x;
    cout<<"Enter the size of the stack:"<<endl;
    cin>>n;
    cout<<"Enter elements for stack:"<<endl;
    while(n--){
        cin>>x;
        st.push(x);
    }

    sort_stack(st,st2);
    return 0;
}