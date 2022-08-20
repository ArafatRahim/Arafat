#include<iostream>
using namespace std;
int main()
{


    char x;
    cin>>x;
    if(58>=x&&x>=48)
        cout<<"IS DIGIT";
    else if(90>=x&&x>=65)
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else if(127>=x&&x>=65)
        cout<<"ALPHA"<<endl<<"IS SMALL";
}













