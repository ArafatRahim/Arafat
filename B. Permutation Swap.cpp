#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,gcd=0;
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            int a;
            cin>>a;
            gcd=__gcd(abs(i-a),gcd);
        }
        cout<<gcd<<endl;
    }
}
