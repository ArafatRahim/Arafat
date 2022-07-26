#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double A,B,C,root,R1,R2,divisor;
    cin>>A;
    cin>>B;
    cin>>C;
    root=sqrt(B*B-4*A*C);
    divisor=2*A;
    R1=(-B+root)/divisor;
    R2=(-B-root)/divisor;
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;
     if(divisor==0&&root<=0)
        cout<<"Impossivel calcular"<<endl;


    return 0;
}
