#include<iostream>
using namespace std;
class PrintNumber
{
public:
    void f1(int printn)
    {
        cout<<"int :"<<printn<<endl;

    }
    void f2(float printn)
    {
        cout<<"float :"<<printn<<endl;

    }
    void f3(double printn)
    {
        cout<<"double :"<<printn<<endl;

    }
    void f4(string printn)
    {
        cout<<"string :"<<printn<<endl;

    }
     void f5(char printn)
    {
        cout<<"Character :"<<printn<<endl;

    }

};
int main()
{
    PrintNumber o1,o2,o3,o4,o5;
    o1.f1(2);
    o2.f2(2.2);
    o3.f3(2.222222222);
    o4.f4("Provat Rahim");
    o5.f5('A');

}
