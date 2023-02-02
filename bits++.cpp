#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int t;
    cin>>t;
    string str;
   for(int i=0;i<t;i++)
   {
        cin>>str;
        if(str[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }


    }
    cout<<x<<endl;
}
