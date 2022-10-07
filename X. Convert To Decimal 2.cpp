#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,t,cnt,z,x;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>n;
        cnt=0;
        while(n!=0)
        {
            t=n%2;
            n=n/2;
            if(t==1)
                cnt++;
        }
        z=pow(2,cnt)-1;
        cout<<z<<endl;
    }
}
