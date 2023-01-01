#include <bits/stdc++.h>
#define ll long long
using namespace std;
float total_phy=0, avg_phy=0,total_chem=0, avg_chem=0,total_math=0, avg_math=0;
class marks
{
public:
 int marks;
 string name, roll;
 input_info()
 {
 cout<<"Enter the name of the student : ";
 cin>>name;
 cout<<"Enter the roll of the student : ";
 cin>>roll;
 }
};
class physics: public marks
{
public:
 void mark()
 {
 cout<<"Enter physics marks : ";
 cin>>marks;
 total_phy+=marks;
 }
 void calculate(int num)
 {
 avg_phy= total_phy/(num*1.0);
 }
};
class chemistry: public marks
{
public:
 void mark()
 {
 cout<<"Enter chemistry marks : ";
 cin>>marks;
 total_chem+=marks;
 }
 void calculate(int num)
 {
 avg_chem= total_chem/(num*1.0);
 }
};
class mathematics: public marks
{
public:
 void mark()
 {
 cout<<"Enter mathematics marks : ";
 cin>>marks;
 total_math+=marks;
 }
 void calculate(int num)
 {
 avg_math=total_math/(num*1.0);
 }
};
int main()
{
 int num;
 cout<<"Enter the number of students in the class : ";
 cin>>num;
 cout<<endl;
 marks mk;
 chemistry c;
 physics p;
 mathematics m;
 for(int i=0; i<num; i++)
 {
 mk.input_info();
 p.mark();
 c.mark();
 m.mark();
 cout<<endl;
 }
 p.calculate(num);
 c.calculate(num);
 m.calculate(num);
 cout<<"Total Physics marks : "<<total_phy<<endl;
 cout<<"Average Physics marks : "<<avg_phy<<endl<<endl;
 cout<<"Total Chemistry marks : "<<total_chem<<endl;
 cout<<"Average Physics marks : "<<avg_chem<<endl<<endl;;
 cout<<"Total Biology marks : "<<total_math<<endl;
 cout<<"Average Physics marks : "<<avg_math<<endl<<endl;
}
