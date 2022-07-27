#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int X,Y;
    long double a;
    cin>>X>>Y;
    switch (X)
    {


    case 1:
    {
         a=4.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a*Y<<endl;
        break;

    }
    case 2:
    {
        a=4.50;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a*Y<<endl;
        break;

    }
    case 3:
    {
        a=5.00;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a*Y<<endl;
        break;

    }

    case 4:
    {
        a=2.00;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a*Y<<endl;
        break;

    }
    case 5:
    {
        a=1.50;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a*Y<<endl;
        break;

    }
    }
}
