#include<bits/stdc++.h>
using namespace std;
void ACTIVITY(int a[],int b[],int c)
{
    int i=0;
    cout<<i<<" ";
    for(int k=1;k<c;k++)
    {
        if(a[k]>=b[i])
        {
            i=k;
            cout<<k<<" ";
        }
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ACTIVITY(a,b,m);
}
