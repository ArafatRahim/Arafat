#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0,j=0;i<s1.size();i++,j++)
    {
        if(s1[i]==s2[j])
        {
            cout<<0;
        }
        else
            cout<<1;
    }
}
