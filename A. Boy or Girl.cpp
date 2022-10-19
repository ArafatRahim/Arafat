#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=0;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=a[i+1])
           n++;
    }
    cout<<n;

}
