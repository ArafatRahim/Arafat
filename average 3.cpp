#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    float n1,n2,n3,n4,n5,avg;
    cin>>n1>>n2>>n3>>n4;
    n5=(n1*2+n2*3+n3*4+n4*1)/10;
    cout<<fixed<<setprecision(1);
    cout<<"Media: "<<n5<<endl;
    if(n5>=7)
        cout<<"Aluno aprovado."<<endl;
    else if(n5<5)
        cout<<"Aluno reprovado."<<endl;
    else if(n5>=5&&n5<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        float n6;
        cin>>n6;
        cout<<fixed<<setprecision(1);
        cout<<"Nota do exame: "<<n6<<endl;
        avg=(n5+n6)/2.0;
        if(avg>5)
            cout<<"Aluno aprovado."<<endl;
        if(4.9>avg)
        {
            cout<<"Aluno reprovado."<<endl;
        }

        cout<<"Media final: "<<avg<<endl;
    }
    return 0;

}
