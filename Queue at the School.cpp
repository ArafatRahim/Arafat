#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t;
    cin>>x>>t;
    string s;
    cin>>s;

    int f=0,f1=0;
    while(t--)
    {
        for(int i=0; i<x-1; i++)
        {

            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i+1]='B';
                s[i]='G';
                i++;
            }

        }
    }
cout<<s;




}
