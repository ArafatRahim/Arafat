#include <bits/stdc++.h>
using namespace std;
int main()
{


    int x, i, j, cout1 = 0, cout2 = 0;
    cin >> x;

    string str;
    cin>>str;

    for (i = 0; i < x; i++)
    {

        if (str[i] == 'A')
            cout1++;
        else if (str[i] == 'D')
            cout2++;
    }
    if(cout1>cout2) cout<<"Anton"<<endl;
    else if(cout1<cout2) cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}
