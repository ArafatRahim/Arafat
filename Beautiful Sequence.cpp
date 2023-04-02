#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        long long a[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(int i=0;i<x;i++)
        {
            if(a[i]<=i+1)
            {
                f++;
            }
        }
        if(f) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
