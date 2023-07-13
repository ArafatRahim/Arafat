#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int c=0;
        if(s.size()%2==0&&s.size()>2)
        {
            for(int i=1;i<s.size()/2;i++)
            {
                if(s[i]!=s[i-1])
                {
                    c++;
                    break;
                }
            }
        }
        else if(s.size()%2==1&&s.size()>3)
        {
            for(int i=1;i<s.size()/2;i++)
            {
                if(s[i]!=s[i-1])
                {
                    c++;
                    break;
                }
            }
        }

        if(c)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
