/*To be a palindrome it must cotain all even no of characters or just one odd character.
Else it isn't a palindrome.*/
#include <bits/stdc++.h>

using namespace std;

string func(string s){
    unordered_map<char, int> letterCount;
    int count = 0;
    for(char c : s){
        letterCount[c]++;
    }
    for(auto it : letterCount){
        if(it.second%2 != 0){
            count++;
        }
    }
    return (count > 1) ? "NO" : "YES";
}

int main(){
    string s;
    cin >>s;
    cout<<func(s);
    
    return 0;
}
