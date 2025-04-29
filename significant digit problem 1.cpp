#include<bits/stdc++.h>
using namespace std;

int f(string n)
{
    int c=0;
    int i=n.size()-1;
    int j=0;
    bool f1=0,f2=0;
    while(n[i]=='0' && i>=0 && f1==0 || n[j]=='0' && j<n.size()&& f2==0)
    {
        if(n[i]>='1' && n[i]<='9' ) f1++ ;
        else{
        c++;
        i--;
        }
        if(n[j]>='1' && n[j]<='9') f2++;
        else{
        c++;
        j++;
        }

    }
    return c;
}

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    bool f2=0,f1=0,ft=0;
    int t;
    for(int i=2; i< s.size(); i++)
    {
        char ch=s[i];

        if(s[0]=='0' && s[1]=='.')
        {
            if(s[i]>='1' && s[i]<='9')
            {
                t=i;
                ft=1;
                break;
            }
        }
    }



    for(int i=0; i< s.size(); i++)
    {
        char ch=s[i];
        if(s[i]=='.')
        {
            f2=1;
            break;

        }
    }

    if(f2)
    {
        for(int i=0; i< s.size(); i++)
        {

            if(s[i]=='.')
            {
                continue;

            }

               cnt++;
        }
    }


    int d=s.size();
    int x=f(s);
    if(f2==0)
    cout<<s.size()-x;
    else if(ft)
    {
        int y=s.size()-(t);
        cout<<y;
    }
    else cout<<cnt;

}
