#include<iostream>
#include<iomanip>
using namespace std;
using std::endl;
int main()
{
    float A,B,avg,sum;
    cin>>A;
    cin>>B;
    sum=A+B;
    avg=float(sum/2);
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA  =  "<<avg<<endl;
    return 0;
}
