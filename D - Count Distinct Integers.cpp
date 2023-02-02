#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,a[10000],cnt=0;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    for(int j=0;j<t;j++)
    {
        if(a[j]==a[j+1])
        {
            continue;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;



}
