
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
    if(p)
    {
       long long Min = min(a,b);
       if(min)
       {
        cout<<5*d+Min<<endl;
       }
    }
    }
    
}
