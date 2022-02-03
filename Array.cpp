// //Q.given an array a[] of size n.For every i from0 to n-1 output max(a[0],a[1])
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int l,i,n;
//     cin >> n;
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//         l =a[0];
//         if(l<a[i])
//             l=a[i];
//     }
//     cout<<"The maximum value of the matrix is: "<<l;
//     return 0;
// }
// //Q. Sum of all the subarray of the array
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j,n,sum=0;
//     cin >>n;
//     int a[n];
//     for(i=0;i<n;i++)
//         cin>>a[i];
//     for(i=0;i<n;i++)
//     {
//         for(j=i;j<n;j++)
//             {
//                 sum+=a[j];
//             }
//     }
//     cout<<"Sum:"<<sum;
//     return 0; 
// }

#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

/* Function to push nodes in a linked list. */
void push(struct node **head_ref, int data)
{
    struct node *node;
    node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->next = (*head_ref);
    (*head_ref) = node;
}

/* Function to reverse the nodes in a linked list. */
void reverse(struct node **head_ref)
{
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = (*head_ref);
    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

/* Function to print the nodes in a linked list. */
void printnodes(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

/* Driver function to check the above algorithm. */
int main()
{

    int n;
    printf("Enter the size of the list:\n");
    scanf("%d", &n);
    int list[n];
    printf("Enter your data for the list:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    struct node *head = NULL;
    for (int i = n - 1; i >= 0; i--)
        struct node *head = NULL;
    push(&head, 10);
    push(&head, 11);
    push(&head, 18);
    push(&head, 60);
    push(&head, 94);
    push(&head, 100);
    
    cout << "List before reversing" << endl;
    printnodes(head);
    reverse(&head);
    cout << endl;
    cout << "List after reversing" << endl;
    printnodes(head);
    return 0;
}