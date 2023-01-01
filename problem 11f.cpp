#include<iostream>
using namespace std;
class base
{
   public:
       void f1(int n,char c)
       {
           cout<<"int n :"<<n<<endl;
           cout<<"char c :"<<c<<endl;
       }
       void f1(char c,int n)
       {

           cout<<"char c :"<<c<<endl;
           cout<<"int n :"<<n<<endl;
       }

};
int main()
{
    base ob1,ob2;
    ob1.f1(5,'a');
    ob2.f1('b',6);

}
