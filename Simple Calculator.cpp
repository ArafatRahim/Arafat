#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int p1,u1;
int p2,u2;
float p1p;
float p2p,pay;
cin>>p1>>u1>>p1p;
cin>>p2>>u2>>p2p;
pay=(p1p*u1+p2p*u2);
cout<<fixed<<setprecision(2);
cout<<"VALOR A PAGAR: R$"<<pay<<endl;
}



