#include<iostream>
using namespace std;
int main()
{
    int x,y,sum=0;
    int n;
    cin>>n;


    for(int i=0; i<n; i++)
    {

        cin>>x>>y;
        if(x%2==0)
            x++;

        for(int i=0; i<y; i++)
        {

            if(x%2==1)
            {


                sum=sum+x;
                x=x+2;

            }

        }
        cout<<sum<<endl;
        sum=0;

    }

}
