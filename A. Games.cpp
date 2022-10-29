#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,cnt=0,cnt1=0,k,m;
    cin>>n;
    int a[n],b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt;


}
