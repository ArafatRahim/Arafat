#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a,b,c=0;
    cin>>n;
    b=n;
    while(n!=0)
    {
        a=n%10;
        i++;
        n=n/10;
        c=c*10+a;

    }
    cout<<c;

    cout<<endl;
    if(c==b)
    cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;

}
