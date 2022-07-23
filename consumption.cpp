#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double X,Y,Z;
    cin>>X>>Y;
    Z=(X/Y);
    cout<<fixed<<setprecision(3);
    cout<<Z<<" km/l"<<endl;
    return 0;
}
