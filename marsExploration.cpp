#include <bits/stdc++.h>

using namespace std;

int func(string str){
    int count = 0;
    for(int i=0;i<str.size();i+=3){
        if(str[i] != 'S'){
            count++;
        }
        if(str[i+1] != 'O'){
            count++;
        }
        if(str[i+2] != 'S'){
            count++;
        }
    }
    
    return count;
}

int main(){
    string str;
    cin>>str;
    cout<<func(str);
    return 0;
}