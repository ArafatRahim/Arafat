#include<bits/stdc++.h>
using namespace std;
int functionn(long long a,long long b)
{
   long long i,s=0;
    for(i=2; i<=b; i+=2)
    {
        s+=pow(a,i);

    }
    cout<<s;
}
int main()
{
    long long x,y,s;
    cin>>x>>y;
    functionn(x,y);

}
