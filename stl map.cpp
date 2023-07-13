#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //1 2 3 4 4 3 2 1
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}
