#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,f,rem,i,k=0;
    cin>>a>>b;
    for(i=a ; i<=b ; i++)
    {
        f=0;
        x=i;
        while(x!=0)
        {
            rem=x%10;
            if(rem!=4 && rem!=7)
            {
                f=1;
                break;
            }
            x=x/10;
        }
        if(f==0)
        {
            cout<<i<<" ";
            k=1;

        }

    }
    if(k==0)
        cout<<"-1"<<endl;
}
