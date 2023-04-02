#include<bits/stdc++.h>
using namespace std;
int x,y,cnt=0;


long long prefixsum(long long v[])
{
        if(cnt==y) return 0;
        cnt++;
        return v[--x]+prefixsum(v);
}
int main()
{

    cin>>x>>y;
    long long b[x];
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }

    cout<<prefixsum(b);

}
