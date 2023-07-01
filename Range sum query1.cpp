#include<bits/stdc++.h>
using namespace std;
void prefixsum(long long a[],long long s,long long b[])
{
    b[0]=a[0];
    for(int i=1;i<s;i++)
    {
        b[i]=b[i-1]+a[i];
    }

}
int main()
{
    long long t1,t2;
    cin>>t1>>t2;
    long long a[t1],b[t2];
    for(int i=0;i<t1;i++)
    {
        cin>>a[i];
    }
    prefixsum(a,t1,b);
    while(t2--)
    {
        long long x,y,sum=0;
        cin>>x>>y;
        if(x==1)
        {
            sum+=b[y-1];
        }
        else
        {
            sum+=b[y-1]-b[x-2];
        }
        cout<<sum<<endl;

    }
}
