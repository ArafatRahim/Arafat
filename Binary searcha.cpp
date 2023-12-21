#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int l=0,r=n-1,mid,toSearch;
    cin>>toSearch;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==toSearch)
        {
            cout<<"Found"<<endl;
            break;
        }
        else if (v[mid]<toSearch)
        {
            r=mid-1;
        }
        else if(v[mid]>toSearch)
            l=mid+1;
    }
}
