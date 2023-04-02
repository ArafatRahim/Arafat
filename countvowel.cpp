#include<bits/stdc++.h>
using namespace std;
int vowel(char c)
{
    if( c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return 1;
    else
        return 0;

}
int check(string a,int x)
{
    if(x-1 ==0) return vowel(a[x-1]);
    return vowel(a[x-1])+check(a,x-1);
}
int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int y=s.size();
    cout<<check(s,y);
}
