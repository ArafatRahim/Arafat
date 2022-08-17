#include<iostream>
using namespace std;
int main()
{
    int n,i,x,flag;
    cin>>n;

    while(cin>>x)
    {
        flag=0;
        for(i=2; i<x; i++)
        {

            if(x%i==0)
            {
                cout<<x<<" nao eh primo"<<endl;
                flag=1;
                break;
            }



        }
        if(flag==0)
            cout<<x<<" eh primo"<<endl;

    }




}

