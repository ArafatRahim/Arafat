#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cin>>x;
    for(i=1; i<=10000; i++)
    {

        if(i%x==2)
            cout<<i<<endl;
    }
}
