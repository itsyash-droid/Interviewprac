/*In a inline function the flow the code isn't disturbed as in the normal functions
The function itself gets substituted where it's called*/

#include <bits/stdc++.h>
using namespace std;

inline int cube(int x){
    return x*x*x;
}

int main(){
    int number = 5;
    cout<<"cube of " <<number <<" is " <<cube(number)<<endl;

    return 0;
}