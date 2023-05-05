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

void InsertAtTail(node * &head,int val)
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
    head=n;
}
void InsertAtAnyPosition(node * &head,int val,int pos)
{
    node *n=new node(val);
    if(pos==1)
    {
        InsertAtHead(head,val);
    }
    node *temp=head;
    int i=1;

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    n->next=temp->next;
    temp->next=n;
}

void DeleteAtHead(node * &head)
{
    node *temp=head;
    head=head->next;
    delete temp;
}
void DeleteAtTail(node * &head,int val)
{
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
bool Search(node * head,int key)
{
    node *temp=head;
    while(temp!=0)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void Display(node * head)
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
    InsertAtAnyPosition(head,-2,2);
    DeleteAtHead(head);
    DeleteAtTail(head,1);
    Display(head);

}

