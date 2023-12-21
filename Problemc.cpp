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
       int cnt=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')
           {
               cnt+=1;
           }
           else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='1')
           {
               cnt+=2;
           }
           else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='1')
           {
               cnt+=3;
           }
       }
       cout<<cnt<<endl;
   }
}
