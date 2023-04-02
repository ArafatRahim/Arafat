#include<bits/stdc++.h>
using namespace std;

void f(string s,int l)
{

    f(s,l-1);
    int cnt=0;
    for(int i=0;i<l;i++)
    {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        cnt++;

    }
    }
    cout<<cnt;
}
int main()
{
    string a;
    getline(cin,a);
    int d=a.size();
    f(a,d);


}
