#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=0;
    }
};
void InsertAtHead(node * &head,int val)
{

    node *n=new node(val);
    if(head==0)
    {
        n->next=n;
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void InsertAtTail(node *&head, int val)
{
    node *n=new node(val);

    if(head==0)
    {
        InsertAtHead(head,val);
        return;
    }
    node *temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void Display(node *head)
{
    node *temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}
int main()
{
    node *head=0;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtHead(head,4);
    Display(head);
    InsertAtHead(head,5);

}
