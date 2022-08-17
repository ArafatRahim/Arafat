#include<iostream>
using namespace std;
int main()
{
    int n,i,x,coun=0;
    cin>>n;

    while(cin>>x)
    {

        for(i=1; i<x; i++)
        {

            if(x%i==0)
                coun+=i;;


        }
        if(coun==x)
            cout<<x<<" eh perfeito"<<endl;
        else
            cout<<x<<" nao eh perfeito"<<endl;
        coun=0;


    }




}
