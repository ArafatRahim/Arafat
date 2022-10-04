#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int i;
    cin>>x;
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    for(i=0;i<x;i++)
    {
        cin>>n;
        if(n<0) c1++;
        if(n>0) c2++;
        if(n==0) c3++;
        if(n%2==0)c4++;
        if(n%2!=0) c5++;

    }
    cout<<"Even: "<<c4<<endl;
    cout<<"Odd: "<<c5<<endl;
    cout<<"Positive: "<<c2<<endl;
    cout<<"Negative: "<<c1<<endl;
}
