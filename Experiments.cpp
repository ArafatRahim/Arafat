#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int C;
    char ch;
    int n,cc=0,rr=0,ss=0,tt;
    double a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>C>>ch;
        if(ch=='C'){cc+=C;}
        if(ch=='R'){rr+=C;}
        if(ch=='S'){ss+=C;}
        tt=cc+rr+ss;
        cout<<fixed<<setprecision(2);
        a = double(cc*100)/tt;
        b = double(rr*100)/tt;
        c = double(ss*100)/tt;


    }

cout<<"Total: "<<tt<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<cc<<endl;
cout<<"Total de ratos: "<<rr<<endl;
cout<<"Total de sapos: "<<ss<<endl;

cout<<"Percentual de coelhos: "<<a<<" %"<<endl;
cout<<"Percentual de ratos: "<<b<<" %"<<endl;
cout<<"Percentual de sapos: "<<c<<" %"<<endl;


}
