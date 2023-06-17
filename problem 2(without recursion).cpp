#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1,c,n;
    cin>>n;
    if(n==0) return 0;
    else
    {

    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
    }
}
