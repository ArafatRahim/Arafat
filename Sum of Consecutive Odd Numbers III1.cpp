#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,n1,n2,i,j,sum;
    cin>>x;
    for(i=0; i<x; i++)
    {
        sum=0;
        cin>>n1>>n2;
        if(n1%2==0)
        {
            n1++;
        }

        for(j=0; j<n2; j++)
        {

            sum+=n1;
            n1+=2;


        }

        cout<<sum<<endl;
    }

}
