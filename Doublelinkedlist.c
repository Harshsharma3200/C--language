#include<stdio.h>
#include<stdlib.h>
 struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
 };
 struct Node *head;

void Insertathead(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    (*temp).data = x;
    // (*temp).next =NULL;
    // (*temp).prev =NULL;
    temp->next = NULL;
    temp->prev = NULL;
    


}

int main()
{

}