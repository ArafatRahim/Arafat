#include<iostream>
using namespace std;
int main()
{

    int a,b,temp=0;

    while(1)
    {
        cin>>a>>b;
        if(a==b)
            break;
        else if(a>b)
            cout<<"Decrescente"<<endl;
        else if(b>a)
            cout<<"Crescente"<<endl;

    }

}
