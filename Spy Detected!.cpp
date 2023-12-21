#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,cnt=0,m=0;
        cin>>x;
        int a[x],b[x];
        for(int i=0; i<x; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+x);
        for(int j=0;j<x;j++ )
        {
            if(a[1]!=b[j])
            {
                cout<<j+1<<endl;
            }
        }
    }
}
