#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int t;
    cin>>t;
    string s;
    stack<int>st;
    while(t--)
    {
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>s[i];
        }
        for(int j=0;j<x;j++)
        {
            if(s[j]>s[j+1])
            {
                cout<<"-";
            }
            else
            {
                cout<<"+";
            }
        }
    }
}
