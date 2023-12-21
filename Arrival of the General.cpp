#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int MAX=0,d,MIN=a[0],f;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>MAX)
        {
            MAX=a[i];
            d=i;
        }
        if(a[i]>MIN)
        {
            MIN=a[i];
            f=i;
        }

    }

    cout<<(d-1)+(n-f)-1<<endl;



}
