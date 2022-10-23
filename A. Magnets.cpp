#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0,i,cnt3=0;
    cin>>n;
    vector<int>a(n);
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
            cnt1++;

    }
    cout<<cnt1;

}
