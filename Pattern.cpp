#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(int k=i;k<n;k++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}