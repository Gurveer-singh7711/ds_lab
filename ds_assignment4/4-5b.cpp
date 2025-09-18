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
    int size()
    {
        if(front==-1 || front>rear)
            return 0;
        return rear-front+1;
    }
    void display()
    {
        if(isEmpty()){ cout<<"\nstack empty"; return; }
        for(int i=front;i<=rear;i++)
            cout<<a[i]<<" ";
    }
};

class stack1q{
    queue q;
public:
    void push(int x)
    {
        int sz=q.size();
        q.enqueue(x);
        for(int i=0;i<sz;i++)
        {
            q.enqueue(q.peek());
            q.dequeue();
        }
    }
    void pop()
    {
        if(q.isEmpty())
            cout<<"\nstack underflow";
        else
            q.dequeue();
    }
    int top()
    {
        if(q.isEmpty())
            return -1;
        return q.peek();
    }
    bool isEmpty()
    {
        return q.isEmpty();
    }
    void display()
    {
        q.display();
    }
};

int main()
{
    stack1q s;
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
