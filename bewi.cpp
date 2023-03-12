#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        while(x!=0)
        {
        int temp=x%10;
        x/=10;
        if(temp>0)
        {
        int d=97+temp-1;
        cout<<temp;
        cout<<char(d);
        }
        }
    }
}

