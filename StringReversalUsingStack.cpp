#include <bits/stdc++.h>
#include <stack>

using namespace std;

string Reversal(string input, stack<char> s){
    string res = "";
    for(char ch : input){
        s.push(ch);
    }

    while(!s.empty()){
        res += s.top();
        s.pop();
    }
    return res;
}

int main(){
    string input;
    cout<<"Enter a string:"<<endl;
    getline(cin,input);
    stack<char> s;
    cout<<"Reversed string is:"<<endl;
    cout<<Reversal(input,s);

    return 0;
}