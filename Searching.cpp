#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,a[100],b,i,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cin>>b;
    int k=0;
    for(i=0; i<n; i++)
    {

        if(a[i]==b)
        {

            cout<<i<<endl;
            k=1;
            break;
        }

    }
    if(k==0)
        cout<<"-1"<<endl;
}
