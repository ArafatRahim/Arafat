#include<iostream>
using namespace std;
int main()
{
    int x[101],i,j;
     int max=0;
    for(i=1; i<=100; i++)
    {
        cin>>x[i];
    }

    for(i=1; i<=100; i++)
    {

       if(x[i]>max)
       {
        max=x[i];
        j=i;

       }

    }
      cout<<max<<endl;
      cout<<j<<endl;


}
