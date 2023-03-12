
#include <bits/stdc++.h>
using namespace std;
int main()
{

     int t;
    cin>>t;
    while(t--)
    {
    long long a,b,n,m;
    cin>>a>>b>>n>>m;
    long long x=m+1;
    long long d=n/x;
    long long s=d*x;
    long long p=n-s;
    if(p==n)
    {
         long long M =min(a,b);
        cout<<n*M<<endl;
    }
    else if(s==n)
    {
        cout<<a*m<<endl;
    }
    else
    {
       long long Min = min(a,b);
       if(Min)
       {
        cout<<5*d+Min<<endl;
       }
    }

}
}
