#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,a[1000],n,b,m,cnt=0,cnt1=0;

    cin>>n;
    for(i=0 ; i<n ; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        if(a[i]<m)
        {
            m=a[i];

        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            cnt++;

        }
    }


    if(cnt%2==0)
        cout<<"Unlucky"<<endl;
    else
        cout<<"Lucky"<<endl;



}
