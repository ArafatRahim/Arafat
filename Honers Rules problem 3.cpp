#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//highest power
    vector<int>v;
    for(int i=0;i<n+1;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);// no of coefficient
    }
    int x;
    cin>>x;// f of x




    int s=v[0];

    for(int i=1;i<v.size();i++)
    {

       s=s*x + v[i];

    }

    cout<<s;





}
