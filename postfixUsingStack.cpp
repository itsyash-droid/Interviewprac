#include <bits/stdc++.h>
using namespace std;

int evaluate(string s, stack<int> &st) {
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {  // Check if it's a number
            st.push(s[i] - '0');  // Convert char to int
        } 
        else {  // It's an operator
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if (s[i] == '+') st.push(b + a);
            if (s[i] == '-') st.push(b - a);  // Corrected order
            if (s[i] == '*') st.push(b * a);
            if (s[i] == '/') st.push(b / a);  // Corrected order
        }
    }
    return st.top();
}

int main() {
    string s;
    cin >> s;
    stack<int> st;
    cout << evaluate(s, st) << endl;
    return 0;
}
