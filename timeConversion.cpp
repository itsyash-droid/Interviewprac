#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string res;
    string minutes = s.substr(2, 6);
    int hour = stoi(s.substr(0, 2));
    string format = s.substr(8, 2);

    if (format == "PM" && hour != 12) {
        hour += 12;
    } else if (format == "AM" && hour == 12) {
        hour = 0;
    }

    if (hour < 10) {
        res = "0" + to_string(hour) + minutes;
    } else {
        res = to_string(hour) + minutes;
    }

    return res;
}

int main() {
    string s;
    cin >> s;
    cout << timeConversion(s) << endl;
    return 0;
}