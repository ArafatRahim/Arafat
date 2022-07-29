#include<iostream>
using namespace std;
int main()
{

    int i,a[100],temp,tem,p,q,r;

    for(i=0; i<1; i++)
    {
        cin>>a[i];
        p=a[i];
    }

    for(i=1; i<2; i++)
    {
        cin>>a[i];
        q=a[i];
    }

    for(i=2; i<3; i++)
    {
        cin>>a[i];
        r=a[i];
    }

    for(i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)
        {

            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }


        }
    }

    for(i=0; i<3; i++)
    {
        cout<<a[i]<<endl;
    }


    cout<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;



    return 0;


}
