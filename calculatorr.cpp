#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x, y, z;
    char ch;
    cin>>x>>ch>>y;
    switch (ch)
    {
    case '+':
    {
        z = x + y;
        cout << z;
        break;
    }
    case '-' :
    {
        z = x - y;
        cout << z;
        break;
    }
    case '*':
    {
        z = x * y;
        cout << z;
        break;
    }
    case '/':
    {
        z = (float)x / y;
        cout << z;
        break;
    }

    }
    return 0;
}
