#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,m1,m2,m3,m4,z;
    cin>>a>>b>>c>>d;
    m1=(a%100);
    m2=(b%100);
    m3=(c%100);
    m4=(d%100);
    z=((m1*m2*m3*m4)%100);
    if(z==00)
    {
        cout<<"00";
    }
    else if(z==1||z==2||z==3||z==4||z==5||z==6||z==7||z==8||z==9)
        cout<<"0"<<z<<endl;
    else cout<<z;
}
