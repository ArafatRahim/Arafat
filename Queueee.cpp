#include<bits/stdc++.h>
using namespace std;
#define n 5
int Queue[n],front=0, rear=0;
void InsertAtRear(int item)
{
    if(front==rear+1||front==1&&rear==n)
    {
        cout<<"Overloade"<<endl;
    }
    else if(front==0&&rear==0)
    {
        front=rear=1;
    }
    else if(rear==n)
    {
        rear=1;
    }
    else
    {
        rear=rear+1;
    }
    Queue[rear]=item;
}
void DeleteFromFront(int item)
{
    if(front==0) cout<<"Underflow"<<endl;
    item=Queue[front];
    if(front==rear)
    {
        front=rear=0;
    }
    else if(front==n)
    {
        front=1;
    }
    else
    {
        front=front+1;
    }
}
int main()
{
    InsertAtRear(2);
    DeleteFromFront(2);
}
