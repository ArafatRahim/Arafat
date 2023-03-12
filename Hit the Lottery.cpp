#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        if(t%1==0)
        {
            c1++;
        }
        if(t%5==0)
        {
            c2++;
        }
        if(t%10==0)
        {
            c3++;
        }
        if(t%20==0)
        {
            c4++;
        }
        if(t%100==0)
        {
            c5++;
        }

    cout<<c1+c2+c3+c4+c5;
}
