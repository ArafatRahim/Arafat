#include<iostream>
using namespace std;
int main()
{
    int N,dd,mm,tt;
    cin>>N;
    dd=N/3600;
    N=N%3600;
    mm=N/60;
    N=N%60;
    tt=N/1;
    N=N%1;
    cout<<dd<<":"<<mm<<":"<<tt<<endl;
    return 0;
}
