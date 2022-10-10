#include<iostream>
using namespace std;
int main()
{
int x,y,sum=0;
cin>>x;
for(int i=0;i<5;i++)
{
if(x%2==0)
{
x+=2;
sum=sum+x;
cout<<sum;
}
else
if(x%2==1)
{

x++;
sum=sum+x;
cout<<sum;

}
}
return 0;
}
