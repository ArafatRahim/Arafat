#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    int i,j,x;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<x; i++)
    {
        if(a[i]>0)
        {
            a[i]=1;
        }
        if(a[i]<0)
        {
            a[i]=2;
        }
        if(a[i]==0)
        {
            a[i]=0;
        }

    }

    for(i=0; i<x; i++)
    {
        cout<<a[i]<<" ";
    }



}
