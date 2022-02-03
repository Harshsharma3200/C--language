#include<bits/stdc++.h>
using namespace std;
#define max 10
int size =0;

typedef struct stack{
    int items[max];
    int top;
}st;
void create_stack(st *s)
{
    s->top = -1;
}
int isfull(st *s)
{
    if(s->top == max-1)
        return 1;
    else
        return 0;
}
int isempty(st *s)
{
    if(s->top ==-1)
        return 1;
    else
        return 0;
}
void push(st *s,int newitems)
{
    if(isfull(s))
        cout << "Stack is full"<<endl;
    else
        {
            s->top++;
            s->items[s->top] = newitems;
        }
        size++;
}

void pop(st *s)
{
    if(isempty(s)) 
        cout<<"Stack is full"<<endl;
    else
    {
        cout<<"Item popped="<<s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}
 void print_stack(st *s)
 {
     cout<<"Stack"<<endl;
     for(int i =0;i<size;i++)
        cout <<s->items[i]<<" ";
    cout <<endl;
 }
 int main()
 {
     int ch;
     st *s=(st *)malloc(sizeof(st));
     create_stack(s);
     push(s,1);
     push(s,2);
     push(s,3);
     push(s,4);
     print_stack(s);
     pop(s);
     cout<<"Stack After pop"<<endl;
     print_stack(s);
     return 0;

 }


