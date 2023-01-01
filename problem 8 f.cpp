#include<iostream>
using namespace std;
class addamount
{
    int amount=50;
    public:
        addamount()
        {
            amount=50;
        }
        addamount(int d)
        {
            amount+=d;
        }
        void show()
        {
            cout<<amount<<endl;
        }
};
int main()
{
    addamount ob,ob1(50);
    ob1.show();
    ob.show();
}
