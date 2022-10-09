#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,a[1000],n,b,m;
    cin>>t;
    for(k=0 ; k<t ; k++)
    {
        cin>>n;
        for(i=1 ; i<=n ; i++)
            cin>>a[i];
        for(i=1 ; i<=n ; i++)
        {
            for(j=i+1 ; j<=n ; j++)
            {
                b=a[i]+a[j]+j-i;
                if(i==1 && j==2)
                    m=b;
                else if (m>b)
                    m=b;

            }
        }
        cout<<m<<endl;
    }

}
