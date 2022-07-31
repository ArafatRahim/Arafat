#include <iostream>
using namespace std;

int main()
{

    long double n1,n2,n3,n4,n5,n6,n7,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c;
    cin>>n1>>n2>>n3>>n4>>n5>>n6;


    if(n1>1)
        c1++;
    if(n2>1)
        c2++;
    if(n3>1)
        c3++;
    if(n4>1)
        c4++;
    if(n5>1)
        c5++;
    if(n6>1)
        c6++;

    c=c1+c2+c3+c4+c5+c6;
    cout<<c<<" valores positivos"<<endl;

    return 0;
}
