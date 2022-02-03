#include <stdio.h>
#include <stdlib.h>
struct node
{   int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void NonRecursive(struct node *root)
{
    struct node *current, *pre;
    if (root == NULL)
        return;
    current = root;
    while (current != NULL)
    {
        if (current->left == NULL)
        {
            printf("%d ", current->data);
            current = current->right;
        }
        else
        {
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
                pre = pre->right;
            if (pre->right == NULL)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                pre->right = NULL;
                printf("%d ", current->data);
                current = current->right;
            }
        }
    }
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);
    root->right->left->right = newNode(13);
    root->right->right->left = newNode(14);
    printf("Traversal of tree is(Non Recursive): \n");
    NonRecursive(root);
    getchar();
    return 0;
}