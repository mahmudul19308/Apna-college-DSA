#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    
    ~Node()
{
    if(next!=NULL)
    {
        delete next;
        next==NULL;
    }
}
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List()
    {
        if(head!=NULL)
        {
            delete head;
            head=NULL;
        }
    }

    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val)
    {
        Node *newnode = new Node(val);

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void print()
    {
        Node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "   ";
            temp = temp->next;
        }
    }



    void LL_middle_pos(int val, int pos)
    {
        Node *newnode = new Node(val);
        Node *temp = head;

        /*for(int i=1;i<pos;i++)
        {
            if(temp==NULL)
            {

            }
           temp=temp->next;

        }
        newnode->next=temp->next; //right
       temp->next=newnode;//left
        //at position temp pos-1*/

        if (pos == 1)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        
        for(int i=1;i < pos - 1;i++)
        {
            if (head == NULL || temp->next == NULL)
            {
                printf("Position not found\n");
                return;
            }
            temp = temp->next;
           
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.LL_middle_pos(45, 2);
    printf("The list is : ");
    ll.print();
}