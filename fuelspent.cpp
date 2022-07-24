#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double s,t,v,ln;
    cin>>t>>v;
    s=v*t;
    ln=s/12.0;
    cout<<fixed<<setprecision(3);
    cout<<ln<<endl;
    return 0;
}

