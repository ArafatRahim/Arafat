#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i=1,cnt=0;
    while(true)
    {
        if(n-i==0) break;
        if(m-i==0) break;
        cnt++;
        i++;
    }
    if(cnt%2==1)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;


}
