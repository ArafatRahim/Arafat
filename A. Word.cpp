#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j,cnt1=0,cnt2=0,m=0,n=0;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            cnt1++;
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            cnt2++;
        }

    }
    if(cnt1>cnt2)
    {
        for(i=0; i<str.size(); i++)
        {
            if(str[i]>=97&&str[i]<=122)
            {
                str[i]-=32;
            }

        }
    }
    else
    {
        for(i=0; i<str.size(); i++)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                str[i]+=32;
            }

        }

    }
    cout<<str;
}
