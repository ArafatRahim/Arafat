#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s,i,j,cnt=0;
    cin>>k>>s;
    for(i=0 ; i<=k ; i++)
    {
        for(j=0 ; j<=k ; j++)
        {
            if(s-i-j>=0 && s-i-j<=k)
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
