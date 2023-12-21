#include<bits/stdc++.h>
using namespace std;
#define INF 99999
int main()
{
    int i,j,k;
    int n;
    cin>>n;

    int G[n][n]={
                        { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 }
                };


    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                   if(G[i][j]>G[i][k]+G[k][j]&& G[i][k]!=INF &&G[k][j]!=INF)
                   {
                       G[i][j]=G[i][k]+G[k][j];
                   }

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(G[i][j]==INF)
                cout<<"INF ";
            else
                cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }

}
