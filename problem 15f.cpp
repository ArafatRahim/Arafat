#include<iostream>

using namespace std;
class Bank
{
public:
    int getBalance()
    {
        return 0;
    }
    class BankA
    {
    public:
        int getBalance()
        {
            return 1000;
        }
    };
    class BankB
    {
    public:
        int getBalance()
        {
            return 1500;
        }
    };
    class BankC
    {
    public:
        int getBalance()
        {
            return 2000;
        }
    };
};
int main()
{
    Bank::BankA A;
    Bank::BankB B;
    Bank::BankC C;
    cout<<"Amount deposited at Bank A is : $"<<A.getBalance()<<endl;
    cout<<"Amount deposited at Bank B is : $"<<B.getBalance()<<endl;
    cout<<"Amount deposited at Bank C is : $"<<C.getBalance()<<endl;
}
