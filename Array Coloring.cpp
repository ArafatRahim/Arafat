#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,t=0;
        cin>>x;

        for(int i=0;i<x;i++)
        {
            int d;
            cin>>d;
            if(d%2==1) t++;
        }
        if(t%2==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
