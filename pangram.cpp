#include <bits/stdc++.h>
using namespace std;

string pangram(string s) {
    set<char> letters;  // To store unique letters
    for (char &c : s) {
        if (isalpha(c)) {
            letters.insert(tolower(c)); // Convert to lowercase and insert
        }
    }
    return (letters.size() == 26) ? "pangram" : "not pangram";
}

int main() {
    string s;
    getline(cin, s);
    cout << pangram(s);
    return 0;
}
