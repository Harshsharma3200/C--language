// #include <stdio.h>
// #include <stdlib.h>
// #define bool int

// struct tNode
// {    int data;
//     struct tNode *left;
//     struct tNode *right;
// };

// struct sNode
// {   struct tNode *t;
//     struct sNode *next;
// };

// void push(struct sNode **top_ref, struct tNode *t);
// struct tNode *pop(struct sNode **top_ref);
// bool isEmpty(struct sNode *top);

// void inOrder(struct tNode *root)
// {
//     struct tNode *current = root;
//     struct sNode *s = NULL;
//     bool done = 0;

//     while (!done)
//     {
//         if (current != NULL)
//         {
//             push(&s, current);
//             current = current->left;
//         }
//         else
//         {
//             if (!isEmpty(s))
//             {
//                 current = pop(&s);
//                 printf("%d ", current->data);
//                 current = current->right;
//             }
//             else
//                 done = 1;
//         }
//     }
// }

// void push(struct sNode **top_ref, struct tNode *t)
// {
//     struct sNode *new_tNode = (struct sNode *)malloc(sizeof(struct sNode));
//     if (new_tNode == NULL)
//     {
//         printf("Stack Overflow \n");
//         getchar();
//         exit(0);
//     }
//     new_tNode->t = t;
//     new_tNode->next = (*top_ref);
//     (*top_ref) = new_tNode;
// }
// bool isEmpty(struct sNode *top)
// {
//     return (top == NULL) ? 1 : 0;
// }

// struct tNode *pop(struct sNode **top_ref)
// {
//     struct tNode *res;
//     struct sNode *top;

//     if (isEmpty(*top_ref))
//     {
//         printf("Stack Underflow \n");
//         getchar();
//         exit(0);
//     }
//     else
//     {
//         top = *top_ref;
//         res = top->t;
//         *top_ref = top->next;
//         free(top);
//         return res;
//     }
// }
// struct tNode *newtNode(int data)
// {
//     struct tNode *tNode = (struct tNode *)malloc(sizeof(struct tNode));
//     tNode->data = data;
//     tNode->left = NULL;
//     tNode->right = NULL;
//     return (tNode);
// }

// int main()
// {
//     struct tNode *root = newtNode(1);
//     root->left = newtNode(2);
//     root->right = newtNode(3);
//     root->left->left = newtNode(4);
//     root->left->right = newtNode(5);
//     root->right->left = newtNode(6);
//     root->right->right = newtNode(7);
//     root->left->left->left = newtNode(8);
//     root->left->left->right=newtNode(9);
//     root->left->right->left = newtNode(10);
//     root->left->right->right = newtNode(11);
//     root->right->left->right= newtNode(13);
//     root->right->right->left = newtNode(14);
//     inOrder(root);
//     return 0;
// }

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