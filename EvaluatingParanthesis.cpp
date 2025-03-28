#include <bits/stdc++.h>
#include <stack>

using namespace std;

bool isBalanced(string str) {
    stack<char> stk;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
        } else {
            if (stk.empty()) return false;
            char top = stk.top();
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                stk.pop();
            } else {
                return false;
            }
        }
    }
    return stk.empty();
}

int main() {
    string str;
    cout << "Enter a string of parentheses: ";
    cin >> str;
    if (isBalanced(str)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    return 0;
}