#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        if(str[0]>=97&&str[0]<=122)
        {
            str[0]-=32;
        }
    }
    for(int k=0;k<str.size();k++)
    {
        cout<<str[k];
    }
}
