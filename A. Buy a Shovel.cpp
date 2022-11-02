#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,j,t,n,flag =0,y;
    cin>>x>>n;
    for(i=1;i<=1000;i++)
    {
        t=x*i;
        t=t%10;
        if(t==n||t==0) break;
    }
     cout<<i;
}

