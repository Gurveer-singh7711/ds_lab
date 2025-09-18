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
        else
            return a[front];
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
            cout<<a[i]<<" ";
    }
};

int main()
{
    queue q;
    int n,x;
    
    cout<<"enter number of elements=";
    cin>>n;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        q.enqueue(x);
    }

    if(n%2!=0)
    {
        cout<<"\ncannot interleave odd number of elements";
        return 0;
    }

    int half=n/2;
    int arr1[100], arr2[100];

    for(int i=0;i<half;i++)
    {
        arr1[i]=q.peek();
        q.dequeue();
    }
    for(int i=0;i<half;i++)
    {
        arr2[i]=q.peek();
        q.dequeue();
    }
    for(int i=0;i<half;i++)
    {
        q.enqueue(arr1[i]);
        q.enqueue(arr2[i]);
    }

    cout<<"interleaved queue: ";
    q.display();
}
