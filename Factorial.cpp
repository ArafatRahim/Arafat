#include<iostream>
using namespace std;
int main()
{
    long long n,i,x,j=1,m;

    cin>>m;

    while(j<=m)
    {
        x=1;
        cin>>n;

        for(i=1; i<=n; i++)
        {
            x=x*i;
        }
      cout<<x<<endl;
        j++;
    }
    return 0;
}
