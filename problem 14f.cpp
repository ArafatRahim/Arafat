#include<iostream>
using namespace std;
class Degree
{
public:
    void getDegree()
    {
        cout<<"I got a degree"<<endl;
    }
};

class Undergraduate:public Degree
{
public:
    void getDegree()
    {
        cout<<"I am an Undergraduate"<<endl;
    }
};
class Postgraduate : public Degree
{
public:
    void getDegree()
    {
        cout<<"I am an Postgraduate"<<endl;
    }
};

int main()
{
    Degree d;
    d.getDegree();
    Undergraduate u;
    u.getDegree();
    Postgraduate p;
    p.getDegree();



}
