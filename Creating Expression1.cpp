#include<bits/stdc++.h>
using namespace std;
long long t,x;
bool f(long long n)
{
    if(x<n) return 0;
    else if(n==x) return 1;
    else
        return f(n*10)||f(n*20);
}
int main()
{

    cin>>t;
    while(t--)
    {

        cin>>x;
        if(f(1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
