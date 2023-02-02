#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y;
    b=x;
    while(y--)
    {

        if(x%10==0)
        {
            x=x/10;
        }
        else
        {
            x=x-1;
        }

    }
    cout<<x<<endl;
}
