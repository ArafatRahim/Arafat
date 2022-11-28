#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Value x =  "<<x<<endl<<"Value y =  "<<y<<endl;
    }
    void operator -()
    {
        x=-x;
        y=-y;
    }

};
int main()
{
    A obj(-20,30);
    obj.show();
    -obj;
    obj.show();
}
