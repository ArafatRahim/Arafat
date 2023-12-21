#include<bits/stdc++.h>
using namespace std;
int LCS(char a[],char  b[],int i,int j)
{
    if(a[i]=='0'||b[j]=='0')
        return 0;
    else if(a[i]==b[j])
        return (1 + LCS(a,b,i+1,j+1));
    else
        return max(LCS(a,b,i+1,j),LCS(a,b,i,j+1));
}
int main()
{
     int x,y,f=0,g=0;
     cin>>x>>y;
     char d[x],e[y];
     for(int i=0;i<x;i++)
     {
         cin>>d[i];
         cin>>e[i];
     }

        cout<<LCS(d,e,f,g);
}
