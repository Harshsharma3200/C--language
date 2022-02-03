#include<bits/stdc++.h>
using namespace std;

class node{
    public:
            int data;
            node* next;

            node(int val){
                data = val;
                next=NULL;
            }
};

void InsertEnd(node* &head,int val){
    node* cur = new node(val);
    if(head==NULL)
    {
        head = cur;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = cur;
}

void display(node* head)
{   int i=1;
    node* temp = head;
    while(temp!= NULL)
    {
        cout <<"Data in"<<i<<"of linkedlist is:"<<temp->data<<endl;
        i++;
        temp = temp->next;
    }
}

int main()
{   node* head = NULL;
    InsertEnd(head,1);
    InsertEnd(head,0);
    InsertEnd(head,2);
    return 0;
}