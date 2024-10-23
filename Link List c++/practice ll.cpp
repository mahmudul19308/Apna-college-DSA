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
void print()
{
    Node *temp;
    temp=head;
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
  ll.push_front(45);
  ll.push_front(45);
  ll.push_front(45);
  ll.print();

}