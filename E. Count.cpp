#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    int sum=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>=48&&a[i]<=57)
        {

            sum+=a[i]-48;

        }

    }
    cout<<sum;
}
