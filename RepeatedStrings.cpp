#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long countAInRepeatedString(string s, long n) {
    // Step 1: Count the number of 'a's in the original string
    long count_a_in_s = count(s.begin(), s.end(), 'a');
    
    // Step 2: Calculate how many times the complete string fits into the first n characters
    long full_repeats = n / s.size();
    
    // Step 3: Calculate the number of remaining characters after full repeats
    long remaining_chars = n % s.size();
    
    // Step 4: Count the number of 'a's in the remaining characters
    long count_a_in_remaining = count(s.begin(), s.begin() + remaining_chars, 'a');
    
    // Step 5: Sum up the total number of 'a's
    long total_count_a = (count_a_in_s * full_repeats) + count_a_in_remaining;
    
    return total_count_a;
}

int main() {
    string s;
    long n;
    cin >> s >> n;
    cout << countAInRepeatedString(s, n) << endl;
    return 0;
}
