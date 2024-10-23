#include<iostream>
#include<vector>
using namespace std;
 class Node
 {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
 }; 
 static int idx=-1;
  Node* builTree(vector<int>nodes)
  {
    idx++;
    if(nodes[idx]==-1)
    {
        return NULL;
    }
    Node* CurNode=new Node(nodes[idx]);
    CurNode->left=builTree(nodes);
    CurNode->right=builTree(nodes);

   return CurNode;
  }


int main()
 {
vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,3,-1,6,-1,-1};
Node* root=builTree(nodes);
cout<<root->data;
 }