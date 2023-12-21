#include<bits/stdc++.h>
using namespace std;
bool f()
{
    string s,t;
    cin>>s>>t;
    int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<t.size();j++)
            {
                  if(s[i]==t[j])
                  {
                      cnt++;
                      i++;
                  }
                  else
                  {
                      cnt=0;
                      break;
                  }
            }


        }
     if(cnt==t.size())
            {
                return true;

            }
            else
                return false;

}
int main()
{
    cout<<f();
}
