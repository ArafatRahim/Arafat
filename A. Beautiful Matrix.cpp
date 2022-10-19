#include<bits/stdc++.h>
using namespace std;
int main()
{
    int it;
   // vector<vector<int>>a(5);
    for(int  i=0; i<5; i++)
    {
        //a[i]=vector<int>(5);
        for(int j=0; j<5; j++)
        {
            cin >> a[i][j];

        }

    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
               it =abs(i-2)+abs(j-2);

            }
        }

    }
     cout<<it;

    return 0;

}



