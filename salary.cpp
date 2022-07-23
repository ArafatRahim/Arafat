#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    float N,X,Y,O;
    cin>>N;
    cin>>X;
    cin>>Y;
    O=X*Y;
    cout<<"NUMBER = "<<N<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<O<<endl;
    return 0;
}
