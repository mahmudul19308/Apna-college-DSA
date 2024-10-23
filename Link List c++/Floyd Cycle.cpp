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
    public:
  Node *head;
  Node *tail;
  
 List()
 { 
    head=NULL;
    tail=NULL;
    
 }
  void push_front(int val)
  {
    Node *newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;

    }

  }
  
  bool floyd_cycel(Node *head)
  {
    Node *fast;
    Node *slow;
    slow=fast=head;
   while (fast->next!=NULL&&fast==NULL)
   {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast)
       {
        cout<<"this is cycle";
        return true;
       }
       cout<<"this is not cycle";
       return false;
       
   }
   

  }


  void print()
  {
    Node *temp;
    temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    
  }


};


int main()
{
  List ll;
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);
  //ll.tail->next=ll.head;
  ll.floyd_cycel(ll.head);


  

}