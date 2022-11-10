#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,s;
    cin>>s;
    cin>>str;

    char t;
    int cnt=0;
    for(i=0;i<s;i++)
    {
        if(i==0)
        {
            t=str[i];
            cnt++;
        }
        else
        {
            if(str[i]!=t)
            {
                cnt++;
                t=str[i];
            }
        }
    }
    cout<<cnt;
}

