#include <iostream>
#include <string>

using namespace std;

int main() {
    int year;
    cin >> year;
    
    if (year == 1918) {
        cout << "26.09.1918";
        return 0;
    }

    bool isLeap;
    if (year < 1918) {
        isLeap = (year % 4 == 0);
    } else {
        isLeap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
    }

    if (isLeap) {
        cout << "12.09." << year;
    } else {
        cout << "13.09." << year;
    }

    return 0;
}
