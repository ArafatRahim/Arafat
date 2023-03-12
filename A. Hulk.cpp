#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t==1)
    {
        cout<<"i hate it"<<endl;
        return 0;
    }

    for(int i=1; i<t; i++)
    {
        if(i%2==1)
            cout<<"i hate that"<<" ";
        if(i%2==0)
        {
            cout<<"i love that"<<" ";
        }

    }
    if(t%2==0)
    {
        cout<<"i love it";
    }
    else
    {
        cout<<"i hate it";
    }
}
