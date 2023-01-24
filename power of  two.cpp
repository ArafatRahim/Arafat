#include<bits/stdc++.h>
using namespace std;
#define c 5
int stackk[c],top=-1;
void push(string x)
{
    if(top<c-1)
    {
    top++;
    stackk[top]=x;
    cout<<"PUSH"<<x<<endl;
    }
}
int pop()
{
    top--;
    return stackk[top];
}
int peek()
{
    return top+1;
}
int  main()
{
   push(3);
   push(4);
   push(5);
   pop();
   push(6);
   push(7);
   cout<<peek()<<endl;

}
