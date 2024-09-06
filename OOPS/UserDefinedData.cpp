#include<iostream>
using namespace std;
 class Car{
    public:
    string name;
    int price;
    int seats;
    string type;

 };
 void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
 }
int main(){
    Car c1;
    c1.name="cretta";
    c1.price=1400000;
    c1.seats=5;
    c1.type="Seldom";

     Car c2;
    c2.name="Swift";
    c2.price=7000000;
    c2.seats=5;
    c2.type="maruti";

     Car c3;
    c3.name="fortuner";
    c3.price=4000000;
    c3.seats=5;
    c3.type="Toyota";

    print(c1);
    print(c2);
    print(c3);
}
