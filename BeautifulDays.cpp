#include <iostream>
#include <cmath>

using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10; //num%10 gives the last digit in every iteration, reversed*10 adds a zero(0) in the units place
        num /= 10; //removes the last digit of the n with every iteration.

    }
    return reversed;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for (int day = i; day <= j; ++day) {   //day from ith to jth
        int reversed_day = reverseNumber(day);  //reverses the day
        if (abs(day - reversed_day) % k == 0) {  //finding if the abs differnce is equal to k or not
            count++;    //if yes adding one to count
        }
    }
    return count;
}

int main() {
    int i = 20, j = 23, k = 6;
    cout << beautifulDays(i, j, k) << endl; 
    return 0;
}
