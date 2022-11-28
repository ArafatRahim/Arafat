#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(){}
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"Value x =  "<<x<<endl<<"Value y =  "<<y<<endl;
    }

    A operator +(A obj)
    {
        A temp;
        temp.x=x+obj.x;
        temp.y=y+obj.y;
        return temp;
    }


};


int main()
{
    A o(10,20),o1(30,40),o2;
    o2=o+o1;
    o2.print();

}
