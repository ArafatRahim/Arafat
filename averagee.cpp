#include<bits/stdc++.h>
using namespace std;
int d,cnt=0,sum;
int a[1000000];
double f(int b[])
{
    if(d==0)
    {
        return 0;
    }
    cnt++;
    return b[--d]+f(b);
}
int main()
{

    cin>>d;
    int e=d;
    for(int i=0;i<d;i++)
    {
        cin>>a[i];
    }
    double c=f(a);
    cout<<fixed<<setprecision(6)<<c/e;
}
