#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    int f1=0;
    int i,j;
    while(cin>>str)
    {
        {
         reverse(str.begin(),str.end());
         if(f1)
         cout<<" ";
        }
            f1=1;
            cout<<str;

    }

}
