#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
   
   Node(int val)
   {
    data=val;
    next=NULL;
    
   }

};

class List
{
  Node *head;
  Node *tail;

  public:
    List()
    {
        head=NULL;
        tail=NULL;
    }



void push_back(int val)
{
    Node *newnode=new Node(val);

    if(head==NULL)
    {
       head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
 void print()
 {
    Node *temp;
    head=temp;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
 }

};


int main()
{
    List ll;
   
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.print();

}