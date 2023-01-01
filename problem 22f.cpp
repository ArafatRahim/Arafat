#include <bits/stdc++.h>
#define ll long long
using namespace std;
class vehicle
{
public:
    int mileage, price;
    void set_mileage(int a)
    {
        mileage=a;
    }
    void set_price(int a)
    {
        price=a;
    }
};
class car: public vehicle
{
public:
    int cost,warranty,seating;
    string fuel;
    void set_cost(int a)
    {
        cost= a;
    }
    void set_warranty(int a)
    {
        warranty= a;
    }
    void set_seating(int a)
    {
        seating= a;
    }
    void set_fuel(string a)
    {
        fuel= a;
    }
};
class bike: public vehicle
{
public:
    int cylinder,gears,tank;
    string cooling, wheel;
    void set_cylender(int a)
    {
        cylinder= a;
    }
    void set_gear(int a)
    {
        gears= a;
    }
    void set_tank(int a)
    {
        tank= a;
    }
    void set_cooling(string a)
    {
        cooling= a;
    }
    void set_wheel(string a)
    {
        wheel= a;
    }
};
class audi: public car
{
public:
    string model;
    void set_model(string a)
    {
        model=a;
    }
    void display()
    {
        cout<<"AUDI"<<endl;
        cout<<" Model : "<<model<<endl;
        cout<<" Cost of ownership : "<<cost<<endl;
        cout<<" Warranty (in years) : "<<warranty<<endl;
        cout<<" Seating capacity : "<<seating<<endl;
        cout<<" Fuel (in liters) : "<<fuel<<endl;
        cout<<" Mileage (in km) : "<<mileage<<endl;
        cout<<" Price : $"<<price<<endl;
    }
};
class ford: public car
{
public:
    string model;
    void set_model(string a)
    {
        model=a;
    }
    void display()
    {
        cout<<"FORD"<<endl;
        cout<<" Model : "<<model<<endl;
        cout<<" Cost of ownership : "<<cost<<endl;
        cout<<" Warranty (in years) : "<<warranty<<endl;
        cout<<" Seating capacity : "<<seating<<endl;
        cout<<" Fuel (in liters) : "<<fuel<<endl;
        cout<<" Mileage (in km) : "<<mileage<<endl;
        cout<<" Price : $"<<price<<endl;
    }
};
class bajaj: public bike
{
public:
    string make;
    void set_make(string a)
    {
        make=a;
    }
    void display()
    {
        cout<<"BAJAJ"<<endl;
        cout<<" Make Type : "<<make<<endl;
        cout<<" Cylinder : "<<cylinder<<endl;
        cout<<" Gear : "<<gears<<endl;
        cout<<" Tank capacity (in liter): "<<tank<<endl;
        cout<<" Cooling type : "<<cooling<<endl;
        cout<<" Wheel Type : "<<wheel<<endl;
        cout<<" Mileage (in km) : "<<mileage<<endl;
        cout<<" Price : $"<<price<<endl;
    }
};
class tvs: public bike
{
public:
    string make;
    void set_make(string a)
    {
        make=a;
    }
    void display()
    {
        cout<<"TVS"<<endl;
        cout<<" Make Type : "<<make<<endl;
        cout<<" Cylinder : "<<cylinder<<endl;
        cout<<" Gear : "<<gears<<endl;
        cout<<" Tank capacity (in liter): "<<tank<<endl;
        cout<<" Cooling type : "<<cooling<<endl;
        cout<<" Wheel Type : "<<wheel<<endl;
        cout<<" Mileage (in km) : "<<mileage<<endl;
        cout<<" Price : $"<<price<<endl;
    }
};
int main()
{
    audi a;
    ford f;
    bajaj b;
    tvs t;
    a.set_model("115-r34");
    a.set_cost(1000);
    a.set_warranty(5);
    a.set_seating(5);
    a.set_fuel("Petrol");
    a.set_mileage(180);
    a.set_price(12000);
    f.set_model("115-K123");
    f.set_cost(1000);
    f.set_warranty(3);
    f.set_seating(8);
    f.set_fuel("Diesel");
    f.set_mileage(200);
    f.set_price(20000);
    b.set_make("dx432");
    b.set_cylender(2);
    b.set_gear(5);
    b.set_tank(10);
    b.set_cooling("oil");
    b.set_wheel("alloys");
    b.set_mileage(200);
    b.set_price(6000);
    t.set_make("rx-852");
    t.set_cylender(3);
    t.set_gear(7);
    t.set_tank(15);
    t.set_cooling("liquid");
    t.set_wheel("alloys");
    t.set_mileage(180);
    t.set_price(7000);
    cout<<endl;
    a.display();
    cout<<endl;
    f.display();
    cout<<endl;
    b.display();
    cout<<endl;
    t.display();
}

