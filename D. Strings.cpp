#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,m,n;
    string a,b;
    cin>>a>>b;
    l=a.size();
    m=b.size();
    cout<<l<<" "<<m<<endl;
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b;
}
