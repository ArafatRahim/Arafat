#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,aa,sum=0;
    cin>>aa;
    int a[aa];
    for(int i=0;i<aa;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

        cout<<abs(sum)<<endl;

}

