#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,i;
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        a*=3;
        b*=2;
        if(a>b) break;
    }
    cout<<i;


}
