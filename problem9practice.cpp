/* Write a program to find the quotient polynomial q(x) such that p(x) = (x - 2) q(x) where the
polynomial p(x) = x 3 - 5x 2 + 10x - 8 = 0 has a root at x = 2. */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int degre;
    cin>>degre;//3
    int coefficient[degre+1];//1,-5,10,-8
    int x;
    cin>>x;//2
    for(int i=0;i<degre+1;i++)
    {
        cin>>coefficient[i];

    }
    for(int i=0;i<degre+1;i++)
    {
        cout<<coefficient[i]<<" ";

    }
    cout<<endl;

    int b[degre];//Here, a 3 = 1, a 2 = -7, a 1 = 15, a 0 = -9
    b[0]=0;

    for(int i=0;i<degre;i++)
    {

     b[i+1]=coefficient[i]+x*b[i];
     cout<<b[i+1]<<" ";

    }



}
