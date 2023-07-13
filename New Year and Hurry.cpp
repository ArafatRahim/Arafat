#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,sum=0,t=240,f,d,cnt=0;
    cin>>a>>b;
    for(long long i=1; i<=a; i++)
    {
        sum+=5*i;
    }

    d=t-sum;
    if(d>=b) cout<<a<<endl;
    else
    {
        while(d<b)
        {
            sum-=a*5;
            a--;
            d=t-sum;

        }
        cout<<a<<endl;
    }
}
