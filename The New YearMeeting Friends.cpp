#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    vector<int>v;
    cin>>x>>y>>z;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(),v.end());
    int a=0,b=0,s=0;
    a=abs(v[1]-v[0]);
    b=abs(v[2]-v[1]);
    cout<<a+b;
}
