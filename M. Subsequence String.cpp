#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string str2;
    str2="hello";
    int i=0;
    int z=0;
    while(1)
    {
        if(str[i]==str2[z])
        {
            z++;
        }
        i++;
        if(i==str.size()||z==str2.size())
            break;

    }
    if(z==5) cout<<"YES";
    else cout<<"NO";
}
