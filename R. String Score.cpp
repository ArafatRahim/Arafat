#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int x;
    cin>>x;
    string str;
    cin>>str;
    int i,j,l,cnt=0;

    for(i=0; i<x; i++)
    {
        ch=str[i];

        switch(ch)
        {

        case  'V':
        {
            cnt+=5;
            break;
        }
        case 'W' :
        {
            cnt+=2;
            break;
        }
        case 'X':
        {
            str[i+1]='0';


        }
        case 'Y':
         if(i!=str.size()-1)
         {
            str.push_back(str[i+1]);
            str[i+1]='0';

        }
                    break;
        case  'Z':

            if(i!=str.size()-1)
            {
                if(str[i+1]=='V')
                {
                    cnt/=5;
                    str[i+1]='0';

                }
               else if(str[i+1]=='W')
                {
                cnt/=2;
                str[i+1]='0';
                }

            }
            break;

        }

    }
    cout<<cnt;
}
