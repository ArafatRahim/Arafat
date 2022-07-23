#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,avg,sum;
    cin>>A;
    cin>>B;
    sum=(A*3.5+B*7.5);
    avg=float(sum/11);
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<avg<<endl;
    return 0;
}
