#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,cnt=1,m;
    cin>>x;
    int a[x];
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
     m=0;
        if(x==1)
        {
            cout<<1<<endl;
            return 0;
        }
        for(int i=0; i<x-1; i++)
        {

            if(a[i]<=a[i+1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }

            if(cnt>m)
            {
                m=cnt;
            }

        }
        cout<<m;

    }
