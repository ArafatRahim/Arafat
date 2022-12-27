#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int d,sum=0;
    cin>>a>>b>>c;
    int cnt=0;
    while(a--)
    {
        cin>>d;
        if(d<=b)
        sum+=d;
        if(sum>=c)
        {
            sum=0;
            cnt++;

        }


    }
    cout<<cnt;
}
