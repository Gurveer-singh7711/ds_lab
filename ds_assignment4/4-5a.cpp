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
        if(rear==max-1){}
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
    int peek()
    {
        if(front==-1 || front>rear)
            return -1;
        return a[front];
    }
    bool isEmpty()
    {
        return (front==-1 || front>rear);
    }
    void display()
    {
        if(isEmpty()){ cout<<"\nstack empty"; return; }
        for(int i=front;i<=rear;i++)
            cout<<a[i]<<" ";
    }
};

class stack2q{
    queue q1,q2;
public:
    void push(int x)
    {
        q2.enqueue(x);
        while(!q1.isEmpty())
        {
            q2.enqueue(q1.peek());
            q1.dequeue();
        }
        while(!q2.isEmpty())
        {
            q1.enqueue(q2.peek());
            q2.dequeue();
        }
    }
    void pop()
    {
        if(q1.isEmpty())
            cout<<"\nstack underflow";
        else
            q1.dequeue();
    }
    int top()
    {
        if(q1.isEmpty())
            return -1;
        return q1.peek();
    }
    bool isEmpty()
    {
        return q1.isEmpty();
    }
    void display()
    {
        q1.display();
    }
};

int main()
{
    stack2q s;
    int choice, x;
    while(1)
    {
    
        cout<<"\n1. Push";
        cout<<"\n2. Pop";
        cout<<"\n3. Top";
        cout<<"\n4. IsEmpty";
        cout<<"\n5. Display Stack";
        cout<<"\n6. Exit";
        cout<<"\nEnter choice=";
        cin>>choice;

        if(choice==6) break;

        if(choice==1)
        {
            cout<<"enter element=";
            cin>>x;
            s.push(x);
        }
        else if(choice==2)
        {
            s.pop();
        }
        else if(choice==3)
        {
            cout<<"stack top element="<<s.top()<<"\n";
        }
        else if(choice==4)
        {
            cout<<(s.isEmpty()?"stack empty\n":"stack not empty\n");
        }
        else if(choice==5)
        {
            cout<<"stack elements from top to bottom: ";
            s.display();
            cout<<"\n";
        }
        else
        {
            cout<<"invalid choice";
        }
    }
}
