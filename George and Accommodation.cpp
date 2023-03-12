#include <iostream>
using namespace std;

int main()
{
    int x,y,a,b,cnt=0;
    cin>>x;
    while(x--)
    {
        cin>>a>>b;
        int d=b-a;
        if(d>=2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
