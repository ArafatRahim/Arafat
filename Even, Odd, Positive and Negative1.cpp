#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c1=0,c2=0,c3=0,c4=0;
    for(i=0; i<5; i++)
    {
        cin>>n;

        if(n%2==0)
        {
            c1++;
        }

        if(abs(n)%2==1)
        {
            c2++;
        }
        if(n>0)
        {
            c3++;
        }
        if(n<0)
        {
            c4++;
        }

    }
    cout<<c1<<" valor(es) par(es)"<<endl;
    cout<<c2<<" valor(es) impar(es)"<<endl;
    cout<<c3<<" valor(es) positivo(s)"<<endl;
    cout<<c4<<" valor(es) negativo(s)"<<endl;
}
