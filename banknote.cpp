#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,n5,n10,n20,n50,n100;
    cin>>n;
    cout<<n<<endl;
    n100=n/100;
    n=n%100;
    n50=n/50;
    n=n%50;
    n20=n/20;
    n=n%20;
    n10=n/10;
    n=n%10;
    n5=n/5;
    n=n%5;
    n2=n/2;
    n=n%2;
    n1=n/1;
    n=n%1;
    cout<<n100<<" nota(s) de R$ 100,00"<<endl;
    cout<<n50<<" nota(s) de R$ 50,00"<<endl;
    cout<<n20<<" nota(s) de R$ 20,00"<<endl;
    cout<<n10<<" nota(s) de R$ 10,00"<<endl;
    cout<<n5<<" nota(s) de R$ 5,00"<<endl;
    cout<<n2<<" nota(s) de R$ 2,00"<<endl;
    cout<<n1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}


