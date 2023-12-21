#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>marks;
    marks["Provat"]=10;
    marks["Rahim"]=20;
    marks["Rohan"]=30;
    marks.insert({{"zli",5},{"Tamim",6}});
    map<string,int>:: iterator it;

    for(auto it=marks.begin();it!=marks.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<marks.empty()<<endl;
    cout<<marks.size();


}
