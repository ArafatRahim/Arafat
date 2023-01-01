#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    int i,j;
    int l;
    while(n--)
    {

        cin>>str;
        if(str.size()>10)
        {
            cout<<str.front()<<str.size()-2<<str.back()<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
}
