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
int isempty()
{
    if(top==-1)
    {
        cout<<"\n the stack is empty\n";
        return 0;
    }
    else{
        cout<<"\nstack is not empty\n";
        return 1;
    }
}
int isfull()
{
    if(top==max-1)
    {
        cout<<"\n the stack is full\n";
        return 0;
    }
    else
    {
        cout<<"\nstack is not full\n";
        return 1;
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
char peek()
{
    cout<<"the top ele is="<<a[top]<<endl;
    return a[top];
}
};
int main()
{
    int flag=1;
    string s;
    stack a;
    cout<<"\n enter you string=";
    getline(cin,s);
    
    for(int i=0;i<s.length();i++)
    {
         if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            a.push(s[i]);
        }
        if(s[i]==')')
        {
           if(a.isempty()==0)
           {
                 flag=0;
           }
           if(a.peek()=='(')
           {
            a.pop();
            flag=2;
           }
        }
        if(s[i]=='}')
        {
           if(a.isempty()==0)
           {
                 flag=0;
           }
           if(a.peek()=='{')
           {
            a.pop();
            flag=2;
           }
        }
        if(s[i]==']')
        {
           if(a.isempty()==0)
           {
                 flag=0;
           }
           if(a.peek()=='[')
           {
            a.pop();
            flag=2;
           }
        }
    }
    
if(flag==0 || a.isempty()!=0)
{
    cout<<"not balanced";
}
else
{
    cout<<"balanced";
}
}