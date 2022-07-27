#include<iostream>
using namespace std;
int main()
{

int X,Y;
int a,b;
cin>>X;
cin>>Y;
if(X>Y)
{
  a=24-(X-Y);
  cout<<"O JOGO DUROU "<<a<<" HORA(S)"<<endl;
}
else if(X==Y)
{
   cout<<"O JOGO DUROU 24 HORA(S)"<<endl;

}

else
{

   b=(Y-X);
   cout<<"O JOGO DUROU "<<b<<" HORA(S)"<<endl;

}

}
