#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string s1,s2,s;
        cin>>s1>>s2;
        if(s1.size()>s2.size())
        {
            for(int i=0,j=0;i<x&&j<y;i++,j++)
            {
                s[i]=s1[i]+s2[j];
            }
        }
        cout<<s;
    }
}
