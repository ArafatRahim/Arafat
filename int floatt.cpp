#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    long double x,z,y;
    cin>>x;
    z=fmod(x,1);
    y=floor(x);
    if(z==0)
    {
        cout<<"int "<<x;
    }

    else if(z!=0)
    {

        cout<<"float "<<y<<" "<<fixed<<setprecision(3)<< x-y;
    }

}
