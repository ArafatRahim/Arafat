#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t[1000];
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else
    {
        int i=0;
        while(n!=0)
        {

             t[i]=n%10;
                n/=10;
                cout<<t[i];
                i++;

        }
    }
}
