#include<bits/stdc++.h>
#define size 5
using namespace std;

class Queue
{
    private:
            int items[size],front,rear;
    public:
            Queue()
            {
                front = -1;
                rear = -1;
            }
    bool isfull()
    {
        if(front == 0 && rear == size-1)
            return true;
        
        return false;
    }

    bool empty(){
        if(front == -1)
            return true;
        else
            return false;
    }
    void enQueue(int element)
    {
        if(isfull())
            cout<<"Queue is full!"<<endl;
        else if(front == -1)
            {
                front ==0;
                rear++; 
                items[rear] = element;
                cout<<endl<<"Inserted"<<element<<endl;
            }
    }

    int deQueue()
    {
        int element;
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return(-1);
        }
        else
        {
            element=items[front];
            if(front>=rear)
            {
                front=-1;
                rear=-1;
            }
            else
                front++;

            cout<<endl<<"Deleted ->"<<element<<endl;
            return(element);
        }
    }

    void display()
    {
    int i;
    if(empty())
        cout<<endl<<"Empty Queue"<<endl;
    else
    {
        cout<<endl<<"Front Index ->"<<front;
        cout<<endl<<"Item ->"<<front;
        for(i = front;i<=rear;i++)
            cout<<items[i]<<" ";
            cout<<endl<<"Rear Index ->"<<rear<<endl;
    }
    }
};


int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue('t');
    q.display();
    q.deQueue();
    q.display();
    return 0;
}

//Circular Queue
//in circular queue only one line is added to enQueue

#define size 9
class cirQueue{
    private:
            int item[size],front,rear;
    public:
            cirQueue(){
            front=-1;
            rear=-1;
            }
    bool isfull()
    {
        if(front==0 && rear==size-1)
            return true;
        if(front==rear+1)
            return true;
        return false;
    }
    bool isempty()
    {
        return(front==-1) ;
    }
    void enQueue(int ele)
    {
        if(isfull())
            cout<<"Queue is full!";
        else
        {
            if(front==-1)   front=0;
            reat = (rear+1)%size;
            item[rear] = ele;
            cout<<endl<<"Inserted"<<ele<<endl;
        }
    }
    int deQueue()
    {
        int element;
        if(isempty())
        {
            cout<<"Queue is empty"<<endl;
            return (-1);
        }
        else
        {
            element = item[front];
            if(front== rear)
            {
                front=-1;
                rear = -1;
            }
            else
                fornt=(front+1)%size;
            return (element);
        }
    }
        void display()
        {
            int i;
            if(isempty())
                cout<<"Queue is empty"<<endl;
            else
            {
                cout<<"Front -> "<<front<<endl<<"Item->";
                for(i=front;i!=rear;i=(i+1)%size)
                    cout<<item[i];
                cout<<endl<<"Rear-> "<<rear;
            }
        }
} un