#include<bits/stdc++.h>
using namespace std;
int main()
{


        string n;
        cin>>n;
        int x=stoi(n);
        string s="47";
        string a="74";
        if(n.find(s)==0||n.find(a)==0)
        {
            cout<<"YES"<<endl;
        }
        else if(x%4==0||x%7==0||x%47==0)
        {
            cout<<"YES"<<endl;
        }

        else cout<<"NO"<<endl;

}
