#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k;
    cin>>a>>b;
   if(a%2==0)
   {
       i=a/2;
   }
   else
   {
       i=(a+1)/2;
   }
   if(i>=b)
   {
       cout<<(2*b)-1;

   }
   else
    cout<<(b-i)*2;

}
