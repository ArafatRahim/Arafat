#include<bits/stdc++.h>
using namespace std;
int s;
int b[10000];
bool f(int n)
{
    if(n==s-1) return 1;
    else
     return (b[s-n-1]==b[n]&&f(n+1));


}



int main()
{

    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>b[i];
    }
    if(f(0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
