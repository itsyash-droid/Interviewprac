#include <bits/stdc++.h>

using namespace std;

class Person{
    int age;
    public:
    Person(int age){
        this->age = age;
    }

    void display(){
        cout<<"Age is:" <<age<<endl;
    }
};

int main(){
    Person p1(25);
    p1.display();
    Person p2(30);
    p2.display();

    return 0;
}