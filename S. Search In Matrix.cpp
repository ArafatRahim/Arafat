#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,i,j,c,x,flag=0;
    cin>>r>>c;
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];

        }

    }
    cin>>x;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]==x)
            {
                flag=1;
                break;
            }

        }

    }
    if(flag==1)
        cout<<"will not take number"<<endl;
    else
        cout<<"will take number"<<endl;


}
