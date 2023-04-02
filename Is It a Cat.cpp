#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,g=0;
        string s,a="meow";
        cin>>x>>s;
        string b;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
                continue;
            else
                b.push_back(s[i]);

        }

//        for(int i=0;i<s.size();i++)
//        {
//            if(a[i]!=b[i])
//            {
//                g=1;
//                break;
//            }
//        }
        if(a!=b) cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}
