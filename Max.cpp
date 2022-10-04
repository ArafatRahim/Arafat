#include<iostream>
using namespace std;
int main()
{
    int x,maxx=0,n;

    cin>>x;

    for(int i=0; i<x; i++)
    {
           cin>>n;
            if(n>maxx)
            {
                maxx=n;
            }

    }
    cout<<maxx<<endl;
}
