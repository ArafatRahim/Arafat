#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    string address;
public:
    student()
    {
        name="unknown";
        age=0;
        address="not available";
    }
    void setInfo(string n,int a)
    {
        name=n;
        age=a;
    }

    void setInfo(string n,int a,string ad)
    {
        name=n;
        age=a;
        address=ad;
    }
    void show()
    {
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"address :"<<address<<endl;
    }


};
int main()
{

    int num=10;
    student s[num];
    int age;
    string name, add;
    cout<<"Enter the information"<<endl;
    for (int i=0; i<num; i++)
    {
        cout<<"STUDENT "<<i+1<<endl;
        cout<<" Name : ";
        cin>>name;
        cout<<" Age : ";
        cin >>age;
        cout<<" Address : ";
        cin>>add;
        s[i].setInfo(name, age, add);
        cout<<endl;
    }

    cout<<endl;
    cout<<"Show the information"<<endl;
    for(int i=0; i<num; i++)
    {
        cout<<endl;
        cout<<"STUDENT "<<i+1<<endl;
        s[i].show();
    }
}



