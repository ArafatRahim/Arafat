#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,cnt=0,cnt1=0;
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());
    for(i=0; i<str.size(); i++)
    {

        if(str[i]>=97&&str[i]<=122)
        {
            if(str[i]!=str[i+1])
                cnt++;
            if(str[i]='{'&&str[i+1]=='}')
                cnt=0;


        }


    }
    cout<<cnt;


}


