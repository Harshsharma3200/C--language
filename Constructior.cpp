// #include<bits/stdc++.h>
// using namespace std;
// class Subject
// {
//        int days,subjectno;
// public:
//        Subject(int d=365,int sn=102);
//        void printsub(void)
//        {
//            cout << "Subject No:"<<subjectno<<endl;
//            cout<<"\n"<<"Days: "<<days<<endl;
//        }
// };
// Subject::Subject(int d,int sn)
// {
//     cout << "Construction Subject\n";
//     days = d;
//     subjectno = sn;
// }
// class Student
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

/* A Binary Tree node */
struct TNode
{
    int data;
    struct TNode *left;
    struct TNode *right;
};

struct TNode *newNode(int data);

/* Function to construct AVL tree
from a sorted array */
struct TNode *sortedArrayToBST(vector<int> arr, int start, int end)
{
    /* Base Case */
    if (start > end)
        return NULL;

    /* Get the middle element
    and make it root */
    int mid = (start + end) / 2;
    struct TNode *root = newNode(arr[mid]);

    /* Recursively construct the
    left subtree and make it
    left child of root */
    root->left = sortedArrayToBST(arr, start, mid - 1);

    /* Recursively construct the
    right subtree and make it
    right child of root */
    root->right = sortedArrayToBST(arr, mid + 1, end);

    return root;
}

/* Helper function that allocates
a new node with the given data
and NULL to the left and
the right pointers. */
struct TNode *newNode(int data)
{
    struct TNode *node = new TNode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

// This function is used for testing purpose
void printLevelOrder(TNode *root)
{
    if (root == NULL)
        return;

    queue<TNode *> q;
    q.push(root);

    while (q.empty() == false)
    {
        TNode *node = q.front();
        cout << node->data << " ";
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}

/* Driver program to
test above functions */
int main()
{

    // Assuming the array is sorted
    vector<int> arr = {55, 35, 15, 25, 65, 5, 75, 70, 60};
    int n = arr.size();

    /* Convert List to AVL tree */
    struct TNode *root = sortedArrayToBST(arr, 0, n - 1);
    printLevelOrder(root);

    return 0;
}
