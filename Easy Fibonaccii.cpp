#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fib,first=0,second=1,count=0;
    cin>>n;
    while(count<n)
    {
        if(count<=1)
            fib=count;
        else
        {
            fib=first+second;
            first=second;
            second=fib;
        }
        cout<<fib<<" ";
        count++;
    }
}
