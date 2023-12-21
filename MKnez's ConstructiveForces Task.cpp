#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum=0;
        cin>>x;

        if(x%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=x; i++)
            {
                if(i%2==1)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<-1<<" ";
                }
            }
            cout<<endl;

        }

        else
        {
            if(x==3)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                int d=x/2;
                int e=-(x-1);
                for(int i=1; i<=x; i++)
                {
                    if(i%2==0)
                    {
                        cout<<d<<" ";
                    }
                    else
                        cout<<e<<" ";
                }
                cout<<endl;
            }
        }


    }
}
