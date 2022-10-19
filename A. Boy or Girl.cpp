#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=0;
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    for(i=0;i<a.size();i++)

    {
        if(a[i]!=a[i+1])
        n++;
    }
     if(n%2==0)
        cout<<"CHAT WITH HER!"<<endl;
     else cout<<"IGNORE HIM!"<<endl;





}
