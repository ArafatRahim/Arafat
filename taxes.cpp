#include<iostream>
#include<iomanip>
using namespace std;
int main()
{


    float s,t,m,n;
    cin>>s;

    if(s<=2000.00)
    {
        cout<<"Isento"<<endl;
    }

    else if(s>2000.01&& s<=3000)
    {
        cout<<fixed<<setprecision(2);
        t=((s - 2000.00)*0.08);
        cout<<"R$ "<<t<<endl;

    }
    else if(s >= 3000.01 && s <= 4500.00)
    {
        cout<<fixed<<setprecision(2);
        m=(s - 3000.00)*0.18 + 1000.00*0.08;
        cout<<"R$ "<<m<<endl;

    }
    else if(s >= 4500.01)
    {
        cout<<fixed<<setprecision(2);
        n=(s - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08;
        cout<<"R$ "<<n<<endl;
    }

    return 0;
}
