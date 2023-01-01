#include<iostream>
using namespace std;
class BB
{

public :
    int mir,mba,mwl;
    void Interest()
    {
        cin>>mba;
        mir =mba+mba*0.4;
        cout<<mir;
    }
};
int main()
{
    cout<<"Enter the minimum balance amount :"<<endl;
    BB obj;
    obj.Interest();
}
