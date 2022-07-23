#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R,pi,volume;
    pi=3.14159;
    cin>>R;
    volume=(4.0/3)*pi*R*R*R;
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;
    return 0;
}
