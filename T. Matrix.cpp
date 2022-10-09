#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,i,j,c,x,sum1=0,sum=0;
    cin>>r;
    int a[r][r];
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            cin>>a[i][j];

        }

    }
   for(i=0; i<r; i++)
    {

        for(j=0; j<r; j++)

        {
            if(i==j)
            sum+=a[i][j];
            if(i+j==r-1)
            sum1+=a[i][j];

        }

    }

     x=sum-sum1;
    cout<<abs(x);

}
