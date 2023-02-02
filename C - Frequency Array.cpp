#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    int x,y[1000],z,a,b,cnt;
    while(t--)
    {
        cin>>x;
        cnt=0;
        for(int i=0;i<x;i++)
        {
            cin>>y[i];
        }
        sort(y,y+x);
        for(int j=0;j<x;j++)
        {
                if(y[j]==y[j+1])
                {
                    cnt++;
                    break;
                }

        }
        if(cnt==0)
        {
            cout<<"prekrasnyy"<<endl;
        }
        else
        {
            cout<<"ne krasivo"<<endl;
        }
    }
}
