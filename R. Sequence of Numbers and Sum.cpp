#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c1,c2,Max,Min;
    int i,j,x;

    while(cin>>n>>m)
    {
        if(n<=0||m<=0) break;
        Max=max(n,m);
        Min=min(n,m);
            c1=0;
            for(i=Min; i<=Max; i++)
            {
                c1=c1+i;
                cout<<i<<" ";

            }
            cout<<"sum ="<<c1<<endl;

    };
}
