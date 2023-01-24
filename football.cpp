#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string str;
    int f=0,f2=0,k=0;
    cin>>str;
    int i;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='1')
        {
            f++;
            f2=0;
        }
        else
        {
            f2++;
            f=0;
        }
        if(f==7||f2==7)
        {
            k=1;
        }

    }
    if(k==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
