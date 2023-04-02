#include<bits/stdc++.h>
using namespace std;
int i=0;
void f(long long n)
{
      if(n==1) return;
       i++;
      f(n/2);

}
int main()
{
    long long x;
    cin>>x;
    f(x);
    cout<<i;

}
