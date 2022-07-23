#include<iostream>
#include<iomanip>


using namespace std;

int main()
{

    double A,B,C,X;
    cin>>A;
    cin>>B;
    cin>>C;
    X=double(A*2+B*3+C*5)/10;
    cout<<fixed<<setprecision(1);
    cout<<"MEDIA = "<<X<<endl;
    return 0;

}
