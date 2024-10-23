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
    else
    {
      newnode->next=head;
      head=newnode;
    }
  }
 
    void LL_middle_pos(int val,int pos)
  {
    Node *newnode=new Node(val);
    Node *temp;
    temp=head;
    
    
    for(int i=1;i<pos;i++)
    {
        if(temp==NULL)
        {

        }
       temp=temp->next;
       
    }
    newnode->next=temp->next; //right
   temp->next=newnode;//left
    //at position temp pos-1
   
  }

 void print()
  {
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
  }

};



int main()
{
List ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(4);
ll.push_front(5);
ll.LL_middle_pos(3,2);
ll.print();

}