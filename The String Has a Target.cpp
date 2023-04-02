#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        string s,a,b,d={};
        cin>>s;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
               a+=s[i];
            }
            else
            {
                d+=s[i];
                f++;
            }

        }

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                continue;
            }
            else
            {
                b+=s[i];
            }
        }
        string c=a+b;

        if(f)
        {


        cout<<d;
        }
        else
        cout<<c<<endl;
    }
}
