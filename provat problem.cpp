#include<iostream>
using namespace std;
class Member
{
  public:
      string name;
      void namep ()
      {
          cout<<"Enter Name: "<<endl;
          cin>>name;

      }
      int age;
      void agep()
      {
          cout<<"Enter age: "<<endl;
          cin>>age;

      }

      int phone_number;
      void phoneNumberp()
      {
          cout<<"Enter phone number :"<<endl;
          cin>>phone_number;

      }
      string address;
      void addressp()
      {
          cout<<"Enter Address :"<<endl;
          cin>>address;

      }
      double salary;
      void salaryPrintp()
      {
          cout<<"Enter Salary :"<<endl;
          cin>>salary;

      }

};
class Employee : virtual public Member
{
    public:
    void f1()
    {
        cout<<name<<endl;
    }
    void f2()
    {
        cout<<age<<endl;
    }
     void f3()
    {
        cout<<phone_number<<endl;
    }
     void f4()
    {
        cout<<address<<endl;
    }

    void specializationp()
    {
    string specialization;
    cout<<"Enter the Specialization : "<<endl;
    cin>>specialization;
    cout<<specialization<<endl;

    }

};
class Manager : virtual public Member
{
    public:
    void f6()
    {
        cout<<name<<endl;
    }
    void f7()
    {
        cout<<age<<endl;
    }
     void f8()
    {
        cout<<phone_number<<endl;
    }
     void f9()
    {
        cout<<address<<endl;
    }

    string department;
    void Departments()
    {
        cout<<"Enter Department "<<endl;
        cin>>department;
        cout<<department;
    }

};

int main()
{
    Employee E1;
    E1.namep();
    E1.agep();
    E1.phoneNumberp();
    E1.addressp();
    E1.salaryPrintp();
    Manager M1;
    M1.namep();
    M1.agep();
    M1.phoneNumberp();
    M1.addressp();
    M1.salaryPrintp();
    E1.f1();
    E1.f2();
    E1.f3();
    E1.f4();

     E1.specializationp();




    M1.f6();
    M1.f7();
    M1.f8();
    M1.f9();
     M1.Departments();


}
