#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        string a,b;
        cin>>a>>b;
        int f=0;
        int l=a.size();
        int m=b.size();
        reverse(b.begin(),b.end());
        a+=b;

        for(int i=0;i<l+m;i++)
        {
            if(a[i]==a[i+1])
            {
                f++;

            }
        }

        cout<<(f>1? "NO" : "YES")<<endl;




    }
}
