#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    string str;
    getline(cin,str);
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='\\')
                break;
                else
                    cout<<str[i];
        }

}
