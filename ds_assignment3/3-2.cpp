#include<iostream>
#include<string>
using namespace std;
#define max 100
class stack
{
private:
char a[max],top=-1;
public:
void push(char x)
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
char pop()
{
    if(top==-1)
    {
        cout<<"\nstack underflow(i.e empty)\n";
        return 0;
    }
    else
    {
        char var=a[top];
        cout<<"\npoped out "<<a[top]<<endl;
        top--;
        return var;
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
    string s1;
    stack a;
    cout<<"\n enter you string=";
    getline(cin,s1);
    
    for(int i=0;i<s1.length();i++)
    {
        a.push(s1[i]);
    }
    for(int i=0;i<s1.length();i++)
    {
    s1[i]=a.pop();
    }
    cout<<"your reversed string is="<<s1;
    return 0;

}