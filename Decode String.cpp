#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {

           if(s[i+2]==0)
           {

               int x=s[i]-48;
               int y=s[i+1]-48;
               y=y+x*10;
               char c=y+96;
               cout<<char(c);
               i+=2;
           }
        }
    }
}
