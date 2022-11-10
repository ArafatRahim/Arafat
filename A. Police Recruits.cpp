#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p=0,c=0,sum;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>0)
        {
            p+=x;
        }
        else if(x<0)
        {
            if(p<=0)
            {
                c++;
            }
            else
            {
                p--;
            }
        }


    }
    cout<<c;



}
