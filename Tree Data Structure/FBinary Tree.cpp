//to check the given tree is binary or not
#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *right,*left;
};
struct Node *node(char k)
{
	struct Node *node=(struct Node*)malloc(sizeof(struct Node));
	node->data=k;
	node->right=node->left=NULL;
	return node;
}
bool isfull(struct Node *root)
{
	if(root==NULL)
		return true;
	if(root->left==root->right==NULL)
		return true;
	if(root->left!=NULL && root->right!=NULL)
		return (isfull(root->left)&&isfull(root->right));
	return false;

}
int main() {
  struct Node *root = NULL;
  root = node(1);
  root->left = node(2);
  root->right = node(3);
  root->left->left = node(4);
  root->left->right = node(5);
  root->left->right->left = node(6);
  root->left->right->right = node(7);

  if (isfull(root))
    cout << "The tree is a full binary tree\n";
  else
    cout << "The tree is not a full binary tree\n";
return 0;
}