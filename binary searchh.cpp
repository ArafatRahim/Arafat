#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,f;
    cin>>x>>y;
    vector<int>a;
    for(int i=0; i<x; i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }

    for(int j=0; j<y; j++)
    {
        int l=1,m;
        int r=x;
        cin>>z;
        f=0;
        while(l<=r)
        {
            m=(l+r)/2;
            if(a[m]==z)
            {
                f=1;
                break;
            }
            else if(a[m]<z)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        if(f==1)
            cout<<"found"<<endl;
        else
            cout<<"not found"<<endl;

    }


}
