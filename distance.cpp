#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2,distance,x,y;
    cin>>x1>>y1>>x2>>y2;
    x=pow((x2-x1),2);
    y=pow((y2-y1),2);
    distance=sqrt(x+y);
    cout<<fixed<<setprecision(4);
    cout<<distance<<endl;
    return 0;
}
