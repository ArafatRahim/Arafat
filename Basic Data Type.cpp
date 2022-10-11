#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;


int main() {
     int x;
     long long y;
     char ch;
     float z;
     double a;
     cin>>x>>y>>ch>>z>>a;
     cout<<x<<endl<<y<<endl<<ch<<endl;
     cout<<fixed<<setprecision(3)<<z<<endl;
     cout<<fixed<<setprecision(9)<<a<<endl;
    return 0;
}
