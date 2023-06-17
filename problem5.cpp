#include<bits/stdc++.h>
using namespace std;
#define N 5
int Queue[N],front=0,rear=0;
void InsertAtRear(int item)
{
    if(front==rear+1||front==0&&rear==N)
    {
        cout<<"Queue is Overflow"<<endl;
    }
    else if(front==0&&rear==0)
    {
        front=rear=1;
    }
    else if(rear==N)
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
    if(front==0)
        cout<<"Queue is Underflow"<<endl;
    else if(front==rear)
    {
        front=rear=0;
    }
    else if(front==0)
    {
        front=N;
    }
    else
    {
        front=front-1;
        item=Queue[front];
    }
}

int main()
{
    InsertAtRear(3);
    DeleteFromFront(6);


}
