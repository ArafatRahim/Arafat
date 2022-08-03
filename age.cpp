#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double  x,sum=0,avg,count=0;

    while(1)
    {
        cin>>x;
        if(x<0)
         break;
        else
        {
            count++;
            sum=sum+x;


        }

    }
    cout<<fixed<<setprecision(2);
    avg=sum/count;
    cout<<avg<<endl;;
}
