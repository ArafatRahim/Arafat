#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,z,x,sum=0;
    cin>>x>>z>>y;
    for(int i=0;i<=x*y;i+=x)
    {
        sum+=i;
    }

    int d=(sum-z);
    if(d<0)
    {
        cout<<"0"<<endl;
    }
    else
        cout<<d;
}
