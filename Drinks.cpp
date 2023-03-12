#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        sum+=a[i];
    }
    double d=(float) sum/t;
    cout<<d;
}
