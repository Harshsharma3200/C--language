#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *right,*left;
    Node(int data){
      this->data=data;
      left=right=NULL;
    }
};

void preorder(struct Node *node)
{
  if (node==NULL)
      return;
  preorder(node->left);
  preorder(node->right);
  cout<<node->data<<"->";
}
void postorder(struct Node *node)
{
  if(node==NULL)
    return;
  cout<<node->data<<"->";
  postorder(node->left);
  postorder(node->right);
}
void inorder(struct Node *node)
{
  if(node==NULL)
    return;
  inorder(node->left);
  cout<<node->data<<"->";
  inorder(node->right);
}


int main()
{
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(5);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  root->left->left->left=new Node(8);
  root->right->left=new Node(6);
  root->right->right=new Node(7);
  root->right->left->right=new Node(9);

  cout << "Inorder traversal ";
  inorder(root);

  cout << "\nPreorder traversal ";
  preorder(root);

  cout << "\nPostorder traversal ";
  postorder(root);
  return 0;
  
}
