#include<bits/stdc++.h>
using namespace std;
void TOH(int n, char a, char b,char c)
{
    if(n==0) return;
    TOH(n-1,a,c,b);
    cout<<"MOVE "<<n<<" FROM "<<a<<" TO "<<c<<endl;
    TOH(n-1,b,a,c);
}
int main()
{
    int x;
    cin>>x;
    TOH(x,'a','b','c');
}
