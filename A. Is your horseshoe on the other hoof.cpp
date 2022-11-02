#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,cnt=0;
    cin>>a>>b>>c>>d;
    if(a!=b&&b==c&&c==d) cnt+=2;
    else if(a==b&&b==c&&c==d) cnt+=3;
    else if(a==b&&b==c&&c!=d) cnt+=2;
    else
    {
        if(a==b) c1++;
        if(a==c) c2++;
        if(a==d) c3++;
        if(b==c) c4++;
        if(b==d) c5++;
        if(c==d) c6++;
    }
    cout<<c1+c2+c3+c4+c5+c6+cnt++;

}
