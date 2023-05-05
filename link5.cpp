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
 void InsertAtTail(node *&head,int val)
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

void InsertAtBeg(node *&head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;

}
void DeleteAtTail(node *&head,int val)
{
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *del=temp->next;
    temp->next=temp->next->next;
    delete del;

}
void DeleteB(node *&head)
{
    node *temp=head;
    head=head->next;
    delete temp;
}
bool Search(node *head,int key)
{
    node *ptr=head;
    while(ptr!=0)
    {
        if(ptr->data==key)
        {
            return true;
        }
        ptr=ptr->next;
    }
    return false;
}
void display(node *head)
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
  InsertAtBeg(head,4);
  DeleteAtTail(head,2);
  DeleteB(head);

  display(head);
  cout<<Search(head,1);

}
