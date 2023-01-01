#include <bits/stdc++.h>
#define ll long long
using namespace std;
int apples=0, mangoes=0,total=0;
class fruit
{
public:
    void fruits()
    {
        cout<<"Enter the number of apples : ";
        cin>>apples;
        cout<<"Enter the number of mangoes : ";
        cin>>mangoes;
    }
    void FruitNum()
    {
        total=apples+mangoes;
        cout << "The total fruits in the basket are : " <<total<<endl;
    }
};
class apple: public fruit
{
public:
    void applesNum()
    {
        cout<<"The number of apples in the basket is : "<<apples<<endl;
    }
};
class mango: public fruit
{
public:
    void mangoesNum()
    {
        cout<<"The number of mangoes in the basket is : "<<mangoes<<endl;
    }
};
int main()
{
    fruit f;
    apple a;
    mango m;
    f.fruits();
    a.applesNum();
    m.mangoesNum();
    f.FruitNum();
}
