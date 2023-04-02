#include<bits/stdc++.h>
using namespace std;
int d;
void print(int n )
{
    if(n==0) return;
    print(n-1);
    for(int i=0;i<d-n;i++)
    {
        cout<<" ";
    }
    for(int i=0;i<2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;




}
int main()
{
    int x;
    cin>>x;
    d=x;
    print(x);
}
