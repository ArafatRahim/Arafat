#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,sum=0;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='1')
        {
            sum+=a;
        }
        else if(str[i]=='2')
        {
            sum+=b;
        }
        else if(str[i]=='3')
        {
            sum+=x;
        }
        else if(str[i]=='4')
        {
            sum+=y;
        }

    }
    cout<<sum;

}
