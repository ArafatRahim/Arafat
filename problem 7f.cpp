#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
public:
    void area()
    {
        cout<<length*breadth<<endl;


    }
    rectangle()
    {
        length=0;
        breadth=0;
        cout<<"For None length: "<<length<<endl;
        cout<<"breadth: "<<breadth<<endl;

    }
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
        cout<<"For Two Parameter length: "<<length<<endl;
        cout<<"breadth: "<<breadth<<endl;

    }
    rectangle(int d)
    {
        length=d;
        breadth=d;
        cout<<"For One Parameter length: "<<length<<endl;
        cout<<"breadth: "<<breadth<<endl;

    }

};
int main()
{
    rectangle ob,ob1(10,20),ob2(30);
    ob.area();
    ob1.area();
    ob2.area();

}
