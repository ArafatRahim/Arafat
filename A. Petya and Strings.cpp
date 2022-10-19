#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int i,j,k=0,l=0,m=0,n;
    for(i=0; i<str1.size(); i++)
    {

        if(str1[i]>=65&&str1[i]<=90)
        {
            str1[i]+=32;
        }
        else
        {

            str1[i];
        }

    }

    for(j=0; j<str2.size(); j++)
    {

        if(str2[j]>=65&&str2[j]<=90)
        {
            str2[j]+=32;

        }
        else
        {
            str2[j];
        }

    }


    if(str1==str2)
        cout<<"0";
    else if(str2<str1)
        cout<<"1";
    else if(str1<str2)
        cout<<"-1";
}

