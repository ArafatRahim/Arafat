#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,i,j,temp=0;
    cin>>x;
    int a[x];
    for(i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<x; i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0; i<x; i++)
    {
        cout<<a[i]<<" ";
    }
}
