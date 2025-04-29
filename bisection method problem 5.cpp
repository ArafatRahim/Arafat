#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x*x-6*x+4;
}

int main()
{
    double x1,x2,x3,f1,f2,f3;
    do
    {
        cin>>x1>>x2;
        f1=f(x1);
        f2=f(x2);
    }
    while(f1*f2>0);

    while((x2-x1)>= 0.001)
    {
        x3 = (x1 + x2) / 2.0;
        f3 = f(x3);
        cout << x3 << endl;
        if (fabs(f3) < 0.001)
            break;
        else if (f3*f1<0)
            x2 = x3;
        else
            x1 = x3;
    }

    cout << fixed << setprecision(3) << x3 << endl;

}

