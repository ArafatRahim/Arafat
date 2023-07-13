#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(b.begin(),b.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[a[i].second]=b[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
