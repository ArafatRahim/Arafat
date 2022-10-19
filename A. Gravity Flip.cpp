#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

}
