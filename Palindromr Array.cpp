#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,f=0;
    cin>>x;
    int a[x];
    for(i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<x; i++)
    {
        if(a[i]!=a[x-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

