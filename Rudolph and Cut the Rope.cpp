#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,cnt=0;
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
                if(a>b)
                {
                    cnt++;
                }


        }
        cout<<cnt<<endl;
    }
}
