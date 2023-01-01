#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Shape
{
public:
    virtual void print()
    {
        cout<<"This is a shape"<<endl;
    }
};
class Polygon: public Shape
{
public:
    void print()
    {
        cout<<"Polygon is a shape"<<endl;
    }
};
class Rectangle: public Polygon
{
public:
    void print()
    {
        cout<<"Rectangle is a Polygon"<<endl;
    }
};
class Triangle: public Polygon
{
public:
    void print()
    {
        cout<<"Triangle is a Polygon"<<endl;
    }
};
class Square: public Rectangle
{
public:
    void print()
    {
        cout<<"Square is a Rectangle"<<endl;
    }
};
int main()
{
    Shape S;
    Polygon P;
    Rectangle R;
    Triangle T;
    Square Sq;
    S.print();
    P.print();
    R.print();
    T.print();
    Sq.print();
}
