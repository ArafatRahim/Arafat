#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name,n1,n2;
    cin>>name>>n1>>n2;
    if(name=="vertebrado")
    {
        if(n1=="ave")
        {
            if(n2=="carnivoro")
                cout<<"aguia"<<endl;
            else if(n2=="onivoro") cout<<"pomba"<<endl;
        }
        else if(n1=="mamifero")
        {
            if(n2=="onivoro")
            {
               cout<<"homem"<<endl;
            }
            else if(n2=="herbivoro")
            {
                cout<<"vaca"<<endl;
            }
        }

    }

if(name=="invertebrado")
    {
        if(n1=="inseto")
        {
            if(n2=="hematofago")
                cout<<"pulga"<<endl;
            else if(n2=="herbivoro") cout<<"lagarta"<<endl;
        }
        else if(n1=="anelideo")
        {
            if(n2=="hematofago")
            {
               cout<<"sanguessuga"<<endl;
            }
            else if(n2=="onivoro")
            {
                cout<<"minhoca"<<endl;
            }
        }

    }





}
