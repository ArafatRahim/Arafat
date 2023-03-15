#include<bits/stdc++.h>
using namespace std;
int pre(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*'||c=='/')
    {
        return 2;

    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infix(string s)
{
    stack<char>st;
    string r;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            r+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty()&&s[i]=='(')
                  {
                      r+=st.top();
                      st.pop();
                  }
                  if(!st.empty())
                  {
                      st.pop();
                  }
        }
        else
        {
            while(!st.empty()&&pre(st.top())>=pre(s[i]))
            {
                r+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        r+=st.top();
        st.pop();
    }
    return r;
}

int main()
{
   cout<<infix("A+B*C+D");
}
