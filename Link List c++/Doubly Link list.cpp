#include<iostream>
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
  next=NULL;
  prev=NULL;
 }

};

class List
{
  public:
   Node *head;
   Node *tail;
   List()
   {
    head=tail=NULL;
   }

 void push_front(int val)
  {
    Node *newnode=new Node(val);
    
                                                      

  }  


};


int main()
{

}