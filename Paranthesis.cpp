#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if a character is an opening parenthesis
bool isOpening(char ch) {
    return ch == '(' || ch == '{' || ch == '[';
}

// Function to check if a character is a closing parenthesis
bool isClosing(char ch) {
    return ch == ')' || ch == '}' || ch == ']';
}

// Function to check if two characters are matching parentheses
bool isMatching(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

// Function to check if parentheses are balanced
bool areParenthesesBalanced(const string& str) {
    stack<char> s;
    for (char ch : str) {
        if (isOpening(ch)) {
            s.push(ch);
        } else if (isClosing(ch)) {
            if (s.empty() || !isMatching(s.top(), ch)) {
                return false; // Unmatched closing parenthesis
            }
            s.pop();
        }
    }
    return s.empty(); // True if no unmatched opening parentheses remain
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if (areParenthesesBalanced(input)) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}
