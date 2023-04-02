#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    long long a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    long long cnt=0;
    sort(a,a+t);
    if(t==2) cout<<0;
    else
    {
        int i=0;

        while(i<t)
        {

            if(a[i]>a[i]&&a[i]<a[t-1])
            {
                cnt++;
            }
            i++;
        }
        cout<<cnt;
    }
}

