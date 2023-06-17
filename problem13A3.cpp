#include<bits/stdc++.h>
using namespace std;
#define n 5
void ini(int a[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
}
void addEdge(int a[n][n],int s, int d)
{
    a[s][d]=1;
}
void Print(int a[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int s[n][n];
int multi(int a[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                s[i][j]+=s[i][k]+s[k][j];
            }
        }
    }
}
int main()
{
    int a[n][n];
    ini(a);
    addEdge(a,1,2);
    addEdge(a,1,3);
    addEdge(a,2,1);

    Print(a);


}
