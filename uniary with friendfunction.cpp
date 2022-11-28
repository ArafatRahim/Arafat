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
     void print()
     {
         cout<<"Value x =  "<<x<<endl<<"Value y =  "<<y<<endl;
     }
     friend void operator -(A &obj);
};
  void operator -(A &obj)
  {
      obj.x=-obj.x;
      obj.y=-obj.y;

  }
  int main()
  {
      A ob(20,30);
      ob.print();
      -ob;
      ob.print();
  }
