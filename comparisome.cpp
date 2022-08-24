#include <iostream>
using namespace std;
int main()
{

    int x, y;
    char ch;
    cin >> x >> ch >> y;
    if (x > y&&ch=='>')
        cout << "Right" << endl;

    else  if (x < y&&ch=='<')
        cout << "Right" << endl;
    else  if (x == y&&ch=='=')
        cout << "Right" << endl;


    else
        cout<<"Wrong"<<endl;


}
