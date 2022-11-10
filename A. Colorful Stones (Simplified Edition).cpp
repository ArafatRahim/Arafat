#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin>>str1>>str2;
    int i,j,l=0;
    for(i=0; i<str2.size();i++)
    {
      if(str1[l]==str2[i])
                l++;

    }

    cout<<l+1;
}
