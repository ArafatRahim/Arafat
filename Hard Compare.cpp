#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    double e=b*log(a);
    double f=d*log(c);

    if(e>f)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
