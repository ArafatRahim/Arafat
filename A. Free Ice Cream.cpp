#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    long long x,y,z,i,cnt=0;
    cin>>a>>b;
    char ch;
    while(a--)
    {
        cin>>ch>>x;
        if(ch=='+')
        {
            b+=x;
        }
        else
        {
            if(b>=x)
            {
                b-=x;
            }
            else
            {
                cnt++;
            }
        }

    }
    cout<<b<<" "<<cnt;

}
