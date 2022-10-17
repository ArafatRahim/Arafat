#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,sum,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {

      cin>>x>>y>>z;
          if(x+y+z>=2)
            cnt++;

    }

    cout<<cnt;



}
