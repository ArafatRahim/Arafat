#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="";
        getline(cin,s);
        char c[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>c[i][j];
            }
        }

        int MaxA=0,MaxB=0;
        for(int i=0;i<8;i++)
        {
            int cnt=0;
            for(int j=0;j<8;j++)
            {
                if(c[i][j]=='R')
                {
                    cnt++;
                }
            }
            MaxA=max(MaxA,cnt);
        }
        for(int j=0;j<8;j++)
        {
            int a=0;
            for(int i=0;i<8;i++)
            {
                if(c[i][j]=='B')
                {
                    a++;
                }
            }
            MaxB=max(MaxA,a);
        }

        if(MaxB>MaxA) cout<<"B"<<endl;
        else cout<<"R"<<endl;


    }
}
