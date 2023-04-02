#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
           string s;
           char ch='a';
            for(int k=1,c=1; k<=x; k++,c++)
            {

                s+=ch;
                ch++;
                if(c==z)
                {
                    ch='a';
                    c=0;
                }
                if(ch>'z')
                {
                    ch='a';
                }

            }
            cout<<s;


    }
}
