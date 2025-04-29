#include <bits/stdc++.h>
using namespace std;

int main() {
   string s,e;
   cin>>s;
   int x;
   cin>>x;
   int f=0,f1=0;
   for(int i=2;i<s.size();i++)
   {
       if(s[0]=='0' && s[1]=='.')
       {
           if(s[i]>='1'&& s[i]<='9')
           {
               f=i;
               f1=1;
               break;
           }
       }
   }

   if(f1)
   {
       for(int j=f;j<s.size();j++)
       {
           e+=s[j];
       }

       for(int i=0;i<x+1;i++)
       {
           if(e[x+1]>5)
           {
               e[x]=e[x]+1;
           }
           else if(e[x+1]<5)
           {
               e[x]=e[x];
           }
           else if(e[x+1]==5)
           {
               if(e[x]%2==1)
               {
                   e[x]=e[x]+1;
               }
               else{
                e[x]=e[x];
               }
           }


        }

        double t=stod(e);
        cout<<setprecision(x)<<t;

}

for(int i=0;i<s.size();i++)
{
    if(s[i]=='.')
    {
        for(int i=0;i<x+2;i++)
       {
           if(s[x+2]>5)
           {
               s[x+1]=s[x+1]+1;
           }
           else if(s[x+2]<5)
           {
               s[x+1]=s[x+1];
           }
           else if(s[x+2]==5)
           {
               if(s[x+1]%2==1)
               {
                   s[x+1]=s[x+1]+1;
               }
               else{
                s[x+1]=s[x+1];
               }
           }
    }

        double t=stod(s);
        cout<<setprecision(x)<<t;




}



}}





