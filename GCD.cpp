#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,a,b,t,gcd;
    cin>>n1>>n2;
    a=n1;
    b=n2;
    while(n2!=0)
    {
        t=n1%n2;
        n1=n2;
        n2=t;
    };
    cout<<n1;
}
