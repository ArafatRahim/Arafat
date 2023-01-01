#include<iostream>
using namespace std;
class A
{
    int length,breadth,side;
public:
    void printAreaRectangle()
    {
        cout<<"Rectangle : "<<length*breadth<<endl;
    }
    void f1(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void f1(int d)
    {
        side=d;
    }
    void printAreaSqure()
    {
        cout<<"Squre :"<<side<<endl;
    }

};
int main()
{
    A obj;
    obj.f1(20,30);
    obj.printAreaRectangle();
    A obj2;
    obj2.f1(40);
    obj2.printAreaSqure();
}
