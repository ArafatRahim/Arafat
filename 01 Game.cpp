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
        int s1=0,s2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') s1++;
            else
                s2++;

        }
        int d=min(s1,s2);


            if(d%2==0)
            {
                cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }


    }
}
