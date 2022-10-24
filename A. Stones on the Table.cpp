#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        break;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
           if(a[i]=='R'||a[i]=='G'||a[i]=='B')
           {
               count++;
           }
        }


    }
     cout<<count;

}
