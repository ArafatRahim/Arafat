#include<bits/stdc++.h>
using namespace std;
#define n 5
int Dequeue[n],front=0,rear=0
void Front_Insert(int item)
{
    if(front==1&&rear==n||front==rear+1)
    {
        cout<<"Overflow"<<endl;
    }
    else if(front==0&&rear==0)
    {
        front==1&&rear==1;
        Dequeue[front]=item;
    }
    else if(front==0)
    {
        front=n;
        Dequeue[front]=item;
    }
    else
    {
        front=front-1;
        Dequeue[front]=item;

    }
}
void Front_Delete(int item)
{
    if(front==1&&rear==n||front==rear+1)
    {
        cout<<"Underflow"<<endl;
    }
    else if(front==0&&rear==0)
    {
        rear==0;
        Dequeue[rear]=item;
    }
    else if(rear==n)
    {
        rear=0;
        Dequeue[rear]=item;
    }
    else
    {
        rear=rear+1;
        Dequeue[rear]=item;

    }

}
