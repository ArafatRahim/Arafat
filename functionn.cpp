#include <iostream>
#include <cstdio>
using namespace std;

int sum_of_four(int a,int b,int c,int d)
{
    if(a>b&&a>c&&a>d)
    {
        cout<<a;
    }
    else if(b>a&&b>c&&b>c) cout<<b;
    else if(c>a&&c>b&&c>d) cout<<c;
    else cout << d;


}
int main()
{
    sum_of_four(3,4,6,5);
    return 0;
}
