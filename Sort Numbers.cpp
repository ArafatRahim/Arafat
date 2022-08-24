#include<iostream>
using namespace std;
int main()
{
    int x[50],a,b,c;
    for(int i=0; i<1; i++)
        {
            cin>>x[i];
            a=x[i];
        }
        for(int i=1; i<2; i++)
        {
            cin>>x[i];
            b=x[i];
        }

         for(int i=2; i<3; i++)
        {
            cin>>x[i];
            c=x[i];
        }



    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {


            if(x[i]>x[j])
            {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }


    }
    for(int i=0; i<3; i++)
    cout<<x[i]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;





}
