#include<iostream>
using namespace std;
class student
{
    string name;
public:
    student (string s1)
    {
        name=s1;
        cout<<name<<endl;

    }
    student()
    {
        name="Unknown";
        cout<<name;
    }

};
int main()
{
    student obj("Provat"),ob1;
}
