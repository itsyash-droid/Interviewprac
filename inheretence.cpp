#include <bits/stdc++.h>
using namespace std;

class Vechicle{
public:
    void display(){
        cout<<"this is base vechicle"<<endl;
    }
};

class Car: virtual public Vechicle{

};

class Truck: virtual public Vechicle{

};

class PickupTruck:public Car, public Truck{};
int main(){
    PickupTruck pt;
    pt.display();
}
