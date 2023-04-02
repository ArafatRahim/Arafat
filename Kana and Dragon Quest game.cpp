#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,f,g,h;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        f=floor(x/2)+10;
        f=f-10;
        y--;
        for(int i=0; i<y; i++)
        {
            g=floor(f/2)+10;
            f=g;
        }
        z--;
        while(z--)
        {
            h=g-10;
            g=h;

        }

        if(h<=0) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
}
