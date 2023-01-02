#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char ch;
    for(int i=0; i<a; i++)
    {
       ch=('a'+(i%b));
       cout<<ch;

    }



}
