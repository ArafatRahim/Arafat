#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int M;
    cin>>M;
    int a[M][M];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<M;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(a[i][j]==0)
                a[i][j]=0;
            else
                a[i][j]=1;
        }
    }

    for(int k=0;k<M;k++)
    {
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<M;j++)
            {
                a[i][j]==a[i][j]||(a[i][k]&&a[k][j]);
            }
        }
    }

    for(int i=0;i<M;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}
