#include<iostream>
using namespace std;
class A
{

public:
      int x,y;
    A()
    {

    }
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"Value x =  "<<x<<endl<<"Value y =  "<<y<<endl;
    }
    friend A operator +(A &o1,A &o2);
};
A operator+(A &o1,A &o2)
{
    A temp;
    temp.x=o1.x+o2.x;
    temp.y=o1.y+o2.y;
    return temp;
}
int main()
{
    A obj(10,20),obj1(30,40),obj2;
    obj2=obj+obj1;
    obj2.print();
}
