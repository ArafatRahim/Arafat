#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,cnt=0;
        cin>>x;
        string s;
        cin>>s;
        map<char,int>val;

        for(int i=0;i<s.size();i++)
        {
            if(val[s[i]]>0)
            {
                cnt++;
            }
            else
            {
                cnt+=2;

            }
            val[s[i]]++;

        }
        cout<<cnt<<endl;
    }
}
