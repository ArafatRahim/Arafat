#include<bits/stdc++.h>
using namespace std;
#define n 5
int Queue[n],front=0,rear=0;
void Insert(int item)
{
    if(front==1&&rear==n||front==rear+1)
    {
        cout<<"Overflow"<<endl;
    }
    if(front==0&&rear==0)
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
void Delete(int item)
{
    if(front==0)
    {
        cout<<"UNDERFLOW"<<endl;
    }
    item=Queue[front];
    if(front==1&&rear==1)
    {
        front=rear=0;
    }
    else if(front==n)
    {
        front=1;
    }
    else if(front==rear)
    {
        front =1;
    }
    else
    {
        front=front+1;
    }

}
int main()
{
    Insert(5);
    Delete(1);
}
