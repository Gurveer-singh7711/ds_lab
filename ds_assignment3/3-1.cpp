#include<iostream>
using namespace std;
#define max 100
class stack
{
private:
int a[max],top=-1;
public:
void push(int x)
{
    if(top==max-1)
    {
        cout<<"\nstack overflow(i.e full)\n";
    }
    else{
        top++;
        a[top]=x;
        cout<<x<<" pushed\n";
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"\nstack underflow(i.e empty)\n";
    }
    else
    {
        cout<<"\npoped out "<<a[top]<<endl;
        top--;
    }
}
void isempty()
{
    if(top==-1)
    {
        cout<<"\n the stack is empty\n";
    }
    else{
        cout<<"\nstack is not empty\n";
    }
}
void isfull()
{
    if(top==max-1)
    {
        cout<<"\n the stack is full\n";
    }
    else
    {
        cout<<"\nstack is not full\n";
    }
}
void display()
{
    cout<<"\n your elements of the stack are(from top to bottom)\n";
    for(int i=top;i>-1;i--)
    {
        cout<<a[i]<<" ";
    }
}
void peek()
{
    cout<<"the top ele is="<<a[top]<<endl;
}
};
int main()
{
    stack s;
    s.push(1);
    s.pop();
    s.pop();
    s.push(6);
    s.push(7);
    s.peek();
    s.isfull();
    s.display();
    s.isempty();
    return 0;
}