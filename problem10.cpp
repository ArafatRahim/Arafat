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
void InsertAtTail(node* &head,int val)
{
    node *n=new node(val);
    if(head==0)
    {
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void InsertAtHead(node * &head,int val)
{
    node *n=new node(val);
    n->next=head;
    head= n;
}
void InsertAtAnyPos(node * &head,int val,int pos)
{
    node *n=new node(val);
    node *temp=head;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}
void Display(node *head)
{
    node *temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head=0;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtHead(head,4);
    InsertAtAnyPos(head,100,2);
    Display(head);


}

