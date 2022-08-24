#include<iostream>
using namespace std;
int main()
{

    int x,y,z,a,b,c;
    cin>>x;
    y=x/365;
    a=x%365;
    cout<<y<<" years"<<endl;
    z=a/30;
    b=a%30;
    cout<<z<<" months"<<endl;
    cout<<b<<" days"<<endl;



}
