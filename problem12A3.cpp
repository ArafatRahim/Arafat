#include<bits/stdc++.h>
using namespace std;
#define v 5
void initilize(int a[v][v])
{
    for(int i=0; i<v; i++)
    {
        for(int j=0; j<v; j++)
        {
            a[i][j]=0;
        }
    }
}
void addEdge(int a[v][v],int s,int d)
{
    a[s][d]=1;
}
void Print(int a[v][v])
{
    for(int i=0; i<v; i++)
    {
        for(int j=0; j<v; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[v][v];
    initilize(a);
    addEdge(a,0,1);
    addEdge(a,0,2);
    addEdge(a,0,3);
    addEdge(a,1,3);
    addEdge(a,1,4);
    addEdge(a,2,3);
    addEdge(a,3,4);
    Print(a);



}
