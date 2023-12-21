#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void isPalindrome(string s) {
        string a;

            if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
            {
                transform(s.begin(),s.end(),s.begin(),::tolower);
            }

        cout<<s<<endl;
        bool f=true;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=a[a.size()-i-1])
            {
                f=false;
                break;
            }
        }
        if(f)
        {
          //return false;
        cout<<'"'<<a<<'"'<<" is not a palindrome.";
        }
        else
        {
            //return true;
            cout<<'"'<<a<<'"'<<" is a palindrome.";
        }

    }
};
int main()
{
    Solution obj;
    obj.isPalindrome("A man, a plan, a canal: Panama");
}
