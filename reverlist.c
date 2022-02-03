// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// void push(struct node **head_ref, int data)
// {
//     struct node *node;
//     node = (struct node *)malloc(sizeof(struct node));
//     node->data = data;
//     node->next = (*head_ref);
//     (*head_ref) = node;
// }

// void reverse(struct node **head_ref)
// {
//     struct node *temp = NULL;
//     struct node *prev = NULL;
//     struct node *current = (*head_ref);
//     while (current != NULL)
//     {
//         temp = current->next;
//         current->next = prev;
//         prev = current;
//         current = temp;
//     }
//     (*head_ref) = prev;
// }

// void printnodes(struct node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d --> ", head->data);
//         head = head->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     int n=0;
//     printf("Enter the size of the list:\n");
//     scanf("%d", &n);
//     int list[n];
//     printf("Enter your data for the list:\n");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &list[i]);

//     struct node *head = NULL;
//     for (int i = n - 1; i >= 0; i--)
//         push(&head, list[i]);

//     reverse(&head);
//     printf("List after reversog:\n");
//     printnodes(head);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct tree
{   int val;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TreeNode;

TreeNode *newTree(int data)
{   TreeNode *root = (TreeNode *)malloc(sizeof(TreeNode));
    root->val = data;
    root->left = NULL;
    root->right = NULL;
    return (root);
}

void Recursive(TreeNode *root)
{
    if (root == NULL)
        return;
    Recursive(root->left);
    printf("%d ", root->val);
    Recursive(root->right);
}

int main()
{
    TreeNode *t = newTree(1);
    t->left = newTree(2);
    t->right = newTree(3);
    t->left->left = newTree(4);
    t->left->right = newTree(5);
    t->right->left = newTree(6);
    t->right->right = newTree(7);
    t->left->left->left = newTree(8);
    t->left->left->right = newTree(9);
    t->left->right->left = newTree(10);
    t->left->right->right = newTree(11);
    t->right->left->right = newTree(13);
    t->right->right->left = newTree(14);
    printf("Traversal of the tree(Recursive):\n");
    Recursive(t);
    return 0;
}
