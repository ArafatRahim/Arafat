#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,i,c,j;
    cin>>r>>c;
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];

        }

    }
    for(i=0; i<r; i++)
    {

        for(j=c-1; j>=0; j--)

        {

            cout<< a[i][j]<<" ";


        }
        cout<<endl;

    }

}
