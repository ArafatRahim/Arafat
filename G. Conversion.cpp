#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char a=' ';
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==',')
          str[i]=a;
        else if(str[i]>=65&&str[i]<=90)
        {
            str[i]+=32;
        }
       else  if(str[i]>=97&&str[i]<=122)
        {
            str[i]-=32;
        }

    }
    cout<<str;
}
