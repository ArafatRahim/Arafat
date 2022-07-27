#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main()
{

    double A,B,C,S,Area,Perimetro;
    cin>>A>>B>>C;
    if((A+B)>C&&(B+C)>A&&(A+C)>B)
    {
        Perimetro=A+B+C;
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<Perimetro<<endl;

    }
    else
    {
        Area=0.5*(A+B)*C;
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<Area<<endl;
    }
    return 0;
}
