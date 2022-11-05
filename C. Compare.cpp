#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a>>b;
    int i,j,flag=0,f=0;
    int l=a.size();
    int m=b.size();
    int n=min(l,m);
    for(i=0; i<n; i++)
    {
        if(a[i]<b[i])
        {
            cout<<a;
            flag=0;
            break;
        }
        else if(a[i]>b[i])
        {
            cout<<b;
            flag=0;
            break;
        }
        else
            flag=1;


    }
    if(flag==1) {
        if(l>m) cout<<b;
        else
            cout<<a;
    }


}
