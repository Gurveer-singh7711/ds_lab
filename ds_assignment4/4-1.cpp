#include<iostream>
using namespace std;
#define max 100

class queue{
    int a[max];
    int front=-1;
    int rear=-1;
public:
    void enqueue(int x)
    {
        if(rear==max-1)
        {
            cout<<"\noverflow";
        }
        else if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            a[rear]=x;
        }
        else
        {
            rear++;
            a[rear]=x;
        }
    }
    void dequeue()
    {
        if(front==-1 || front>rear)
        {
            cout<<"\nunderflow";
            front=-1;
            rear=-1;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
    }
    void display()
    {
        if(front==-1 || front>rear)
        {
            cout<<"\nqueue is empty";
            return;
        }
        cout<<"\nqueue elements are: ";
        for(int i=front;i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    void peek()
    {
        if(front==-1 || front>rear)
        {
            cout<<"\nqueue is empty";
        }
        else
        {
            cout<<"\nfront element="<<a[front];
        }
    }
    void isEmpty()
    {
        if(front==-1 || front>rear)
            cout<<"\nqueue empty";
        else
            cout<<"\nqueue not empty";
    }
    void isFull()
    {
        if(rear==max-1)
            cout<<"\nqueue full";
        else
            cout<<"\nqueue not full";
    }
};

int main()
{
    queue q;
    int ch,val;
    while(1)
    {
        cout<<"\n1.enqueue 2.dequeue 3.display 4.peek 5.isEmpty 6.isFull 7.exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"enter value=";
                cin>>val;
                q.enqueue(val);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                q.peek();
                break;
            case 5:
                q.isEmpty();
                break;
            case 6:
                q.isFull();
                break;
            case 7:
                return 0;
        }
    }
}
