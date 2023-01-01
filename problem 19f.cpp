#include<iostream>
using namespace std;
class Mammals
{
public:
    void f1()
    {
        cout<<"I am mammal"<<endl;
    }

};
class MarineAnimals
{
public:
    void f2()
    {
        cout<<"I am a marine animal"<<endl;
    }

};
class BlueWhale:public Mammals,public MarineAnimals
{
public:
    void f3()
    {
        cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
    }
};
int main()
{
    Mammals Mammal;
    Mammal.Mammals::f1();
    MarineAnimals MarineAnimal;
    MarineAnimal.f2();
    BlueWhale BlueWhale;
    BlueWhale.f3();
    BlueWhale.f1();
    BlueWhale.f2();
    BlueWhale.f3();


}
