#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x-6*x+4;
}
int main()
{
    double a,b,x1,x2,x3;
    cin>>a>>b;
    if(f(a)*f(b)>=0) return 0;

        x1=a;
        x2=b;
        do{

            x3=(x1+x2)/2;
            cout<<x3<<endl;
            if(f(x3)*f(x1)<0)
            {
                x2=x3;
            }
            else
                x1=x3;


        }while(abs(f(x3))>0.001);

        cout<<x3<<endl;
}
