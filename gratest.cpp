#include<iostream>
using namespace std;
int main()
{

    int a,b,c,AB;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c)
    {
        AB=((a+b+abs(a-b))/2);
        cout<<a<<" eh o maior"<<endl;
    }
    else if(b>c&&b>a)
    {
        AB=((a+b+abs(a-b))/2);
        cout<<b<<" eh o maior"<<endl;
    }
    else
        cout<<c<<" eh o maior"<<endl;
    return 0;
}
