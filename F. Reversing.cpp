#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a[1000],b[1000],i,j,m;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(i=x-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}
