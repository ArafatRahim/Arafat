#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,i,j,a,b,t,c;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>n;
        if(n==0) cout<<n;

        while(n!=0)
        {
            t= n%10;
            n=n/10;
            cout<<t<<" ";

        }
        cout<<endl;

    }
}
