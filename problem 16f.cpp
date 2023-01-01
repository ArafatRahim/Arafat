#include<iostream>
using namespace std;
class A
{

public:
    int i;
    void printNum()
    {
        cout<<"I :"<<i<<endl;
    }
};
class B: public A
{

public:
    int j;
    void printNum()
    {
       cout<<"J :"<<j<<endl;
    }
};

int main()
{
    B obj;
    obj.i=5;
    obj.j=10;
    obj.A::printNum();
    obj.B::printNum();

}
