#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,s;
    cin>>x>>y;
    int *ptr = &x;
    int *ptr1=&y;
    s=*ptr+*ptr1;

    cout<<s<<endl;
    cout<<abs(*ptr-*ptr1);

}
