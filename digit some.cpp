#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c=0,x,s,t,i,j;
    cin>>x;
    cin>>a>>b;
    for(i=1; i<=x; i++)
    {
        n=i;
        s=0;
        while(n>0)
        {
            t=n%10;
            s=s+t;
            n=n/10;

        };

        if(a<=s&&s<=b)
        {
            c=c+i;
        }
    }
    cout<<c<<endl;
}
