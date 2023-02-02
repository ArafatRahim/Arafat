#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str[i]==str[i+1];

        }
        else
        {
            cout<<str[i];
        }
    }
}
