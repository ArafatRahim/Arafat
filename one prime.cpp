#include<iostream>
using namespace std;
int main()
{
   int x,n,flag=0;
   cin>>n;
   int m=n/2;
   for(int i=2;i<=m;i++)
   {
       if(n%i==0)
       {
       flag=1;
       cout<<"NO"<<endl;
       break;
       }
   }
   if(flag==0)
    cout<<"YES"<<endl;

}


