#include <iostream>

using namespace std;

int main()
{

    int i,j,k;
    for(k=1; i<9; k+=2)
    {

        for(i=k,j=7; i<=9&&j>=5; j--)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<endl;

        }
    }
    return 0;
}
