#include<iostream>
#include<iomanip>
using namespace std;
using std::endl;
int main()
{
    double A,R,PI;
    PI=3.14159;
    cin>>R;
    A=PI*R*R;
    cout<<fixed<<setprecision(4);
    cout<<"A="<<A<<endl;
    return 0;
}
