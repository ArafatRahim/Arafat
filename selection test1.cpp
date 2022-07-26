#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D,E,F;
    cin>>A>>B>>C>>D;
    if(B>C&&B>D)
    {
        if(C>A&&D>A)
        {

            if(C+D>A+B)
            {
                if(C>=0&&0<=D)
                {
                    if(A%2==0)
                    {
                        cout<<"Valores aceitos";

                        else
                            cout <<"Valores nao aceitos";
                    }
                    else
                        cout <<"Valores nao aceitos";
                }
                else
                    cout <<"Valores nao aceitos";

            }
            else
                cout <<"Valores nao aceitos";
        }
        else
            cout <<"Valores nao aceitos";

}
return 0;
}
}
}
