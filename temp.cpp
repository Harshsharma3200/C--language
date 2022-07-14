#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head;

void Insert_begin(int x){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    temp->data=x;
    if (head->next==NULL)
        head=temp;
    else
        temp->next =head;

    head=temp;
}

void Insert_end(int x){
    struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1=head;
    
    while(temp->next==NULL)
    {
        temp=temp->next
    }
}

int main()
{
    int val,n;
    p=NULL;
    do{
        
    }
return 0;
}