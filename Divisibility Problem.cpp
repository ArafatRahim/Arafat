#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        long long s=a%b;
        long long x=b-s;
        if(x==b) cout<<0<<endl;
        else cout<<x<<endl;
    }
}
