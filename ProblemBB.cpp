#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int cnt=0;
   string a="heidi";
       for(int j=0;j<s.size();j++)
       {
           if(a[cnt]==s[j])
           {
             cnt++;
           }

       }

   if(cnt==a.size())
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
