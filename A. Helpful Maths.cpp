#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i;
    for(i=0;i<str.size();i++)
    {

            for(int j=0;j<str.size()-1;j+=2)
            {
                if(str[j]>str[j+2])
                {
                    int temp=str[j];
                    str[j]=str[j+2];
                    str[j+2]=temp;
                }
            }


    }
    cout<<str;

}
