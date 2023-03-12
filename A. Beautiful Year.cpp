#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,sum=0;
    cin>>x;
    int temp,a[x];
    while(x!=0)
    {
        int i=0;
        temp=x%10;
        a[i]=temp;
        x/=10;
        i++;
    }
    for(int i=0;i<x;i++)
    cout<<a[i];
}
