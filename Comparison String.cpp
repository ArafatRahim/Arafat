#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0,ans=0;
        for(int i=0; i<s.size(); i++)
        {
            c++;
            if(i==n-1||s[i]!=s[i+1])
            {
                ans=max(ans,c);
                c=0;
            }

        }

        cout<<ans+1<<endl;


    }
}
