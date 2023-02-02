#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    bool f=0;
    stack<char>st;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        }
        else
        {
            if(st.size()==0)
            {
               f=1;
               break;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.size()||f==1)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
