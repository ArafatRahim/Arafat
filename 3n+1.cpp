#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void seq(int n)
{
    cnt++;
    if(n==1) return;
    else if(n%2==0)
        seq( n/2);
    else
        seq( 3*n+1);
}
int main()
{
    int x;
    cin>>x;
    seq(x);
    cout<<cnt;
}
