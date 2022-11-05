#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    while(n--)
    {
        string str;
        cin>>str;
        int flag=0;
        for(i=0; i<str.size(); i++)
        {
            if((str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0')||(str[i]=='1'&&str[i+1]=='0'&&str[i+2]=='1'))
            {
                flag =1;
                break;
            }

        }
        if(flag==1)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }


}
