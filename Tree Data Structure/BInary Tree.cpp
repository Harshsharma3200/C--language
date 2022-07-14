#include<bits/stdc++.h>
using namespace std;

using namespace std;

struct Node{
  int data;
  Node *left,*right;
};
struct Node *node(int data)
{
  struct Node *node=(struct Node*)malloc(sizeof(struct Node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return(node);
}

void preorder(struct Node *temp)
{
  if (temp!=NULL)
  {
    cout<<" "<<temp->data;
    preorder(temp->right);
    preorder(temp->left);
  }
}

void inorder(struct Node *temp)
{
  if(temp!=NULL)
  {
    inorder(temp->left);
    cout<<" "<<temp->data;
    inorder(temp->right);
  }
}

void postorder(struct Node *temp)
{
  if(temp!=NULL)
  {
    postorder(temp->left);
    postorder(temp->right);
    cout<<" "<<temp->data;
  }
}

int main()
{
  struct Node *root=node(1);
  root->left=node(2);
  root->right = node(3);
    root->left->left = node(4);
    cout<<"preorder ";
    preorder(root);
    cout<<"inorder";
    inorder(root);
    cout<<"postorder";
    postorder(root);

  return 0;
}