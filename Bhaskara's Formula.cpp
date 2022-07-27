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
    root= sqrt(B*B-4*A*C);
    if(root > 0 && A != 0)
    {

        R1 = (-B + root)/(2*A);
        R2 = (-B - root)/(2*A);
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;


    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }

    return 0;
}
