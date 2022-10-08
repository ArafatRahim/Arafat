#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,i,k,m;
    cin>>x;
    int a[x];
    for(i=0; i<x; i++)
    {
        cin>>a[i];
        m=a[0];
        k=0;
        if(m>a[i])
        {
            m=a[i];
            k=i;
            break;
        }

    }
    cout<<m<<" "<<k+1<<endl;
    return 0;

}
