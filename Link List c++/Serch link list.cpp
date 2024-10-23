#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
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

  void push_front(int val)
  {
    Node* newnode=new Node(val);
    if(head==NULL)
    {
      head=tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
  }

 int search(int key)
 {
    int index=0;
    Node *temp;
    temp=head;
    while (temp!=NULL)
    {
        if(temp->data==key)
        {
          return index;
        }
        temp=temp->next;
        index++;   
    }
    return -1;
    
 }

 void print()
 {
    Node *temp;
    head=temp;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }
 }

};


int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

     ll.print();
     cout<<endl;
     cout<<ll.search(2);

     

    


}

#+include<iostream>
u0
.0000000000000
 using namespace std;

class Node
{
public:
  int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data=val;
        next=prev=NULL;
    }
};
class Doublyll
{
    public:
    Node *head;
    Node *tail;
    Doublyll()
    {
        head=NULL;
        tail==NULL;
    }
  void push_front(int val)
  {
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;

    }
  } 

  void print()
  {
    Node *temp;
    temp=head;

    while (temp!=NULL)
    {

          cout<<" "<<temp->data;
          temp=temp->next;
    }
    
  }
};

int main()
{
    Doublyll ll;
    ll.push_front(45);
    ll.push_front(45);
    ll.push_front(45);

    ll.print();

}