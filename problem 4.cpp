#include<bits/stdc++.h>
using namespace std;
int AF(int m, int n)
{
    if(m==0)
        return n+1;
    else if(m!=0&&n==0)
        return AF(m-1,1);
    else
        return AF(m-1,AF(m,n-1));
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<AF(x,y);
}
