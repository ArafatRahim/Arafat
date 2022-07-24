#include<iostream>
using namespace std;
int main()
{
    int t,y,m,s;
    cin>>t;
    y=t/365;
    t=t%365;
    m=t/30;
    s=t%30;
    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<s<<" dia(s)"<<endl;
    return 0;

}
