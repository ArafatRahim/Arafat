#include<iostream>
using namespace std;
class Shape
{
public:
    void f1()
    {
        cout<<"This is a shape"<<endl;
    }
};
class Rectangle : public Shape
{
    public:
    void f2()
    {
        cout<<"This is rectangular shape"<<endl;
    }
};
class Circle : public Shape
{
    public:
        void f3()
        {
            cout<<"This is circular shape"<<endl;
        }
};
class Squre : public Rectangle
{
public:
    void f4()
    {
        cout<<"Square is a rectangle"<<endl;
    }
};
int main()
{
    Squre Sq;
    Sq.f1();
    Sq.f2();
}
