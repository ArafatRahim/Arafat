#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int i;
    int y;
    cin>>x;
    int a[x],min=0;
    for(i=1;i<=x;i++)
    {
        cin>>y;
        a[y]=i;

    }
    for(int j=1;j<=x;j++)
    {
       cout<<a[j]<<" ";
    }

}
