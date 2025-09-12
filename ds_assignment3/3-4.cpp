#include<iostream>
#include<string>
using namespace std;
#define max 100

class stack
{
private:
    char a[max];
    int top=-1;
public:
    void push(char x)
    {
        if(top==max-1)
        {
            cout<<"\nstack overflow\n";
        }
        else
        {
            top++;
            a[top]=x;
            cout<<x<<" pushed\n";
        }
    }
    char pop()
    {
        if(top==-1)
        {
            cout<<"\nstack underflow\n";
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
    char peek()
    {
        if(top==-1) return '#';
        return a[top];
    }
    int isempty()
    {
        return (top==-1);
    }
};

int main()
{
    string infix,postfix="";
    stack s;
    cout<<"\nenter infix expression=";
    getline(cin,infix);

    for(int i=0;i<infix.length();i++)
    {
        char c=infix[i];
        if(c>='a'&&c<='z')
        {
            postfix+=c;
        }
        else if(c=='(')
        {
            s.push(c);
        }
        else if(c==')')
        {
            while(!s.isempty() && s.peek()!='(')
            {
                postfix+=s.pop();
            }
            if(!s.isempty()) s.pop();
        }
        else
        {
            int p1;
            if(c=='^') p1=3;
            else if(c=='*'||c=='/') p1=2;
            else if(c=='+'||c=='-') p1=1;
            else p1=-1;

            int p2;
            if(s.peek()=='^') p2=3;
            else if(s.peek()=='*'||s.peek()=='/') p2=2;
            else if(s.peek()=='+'||s.peek()=='-') p2=1;
            else p2=-1;

            while(!s.isempty() && p1<=p2)
            {
                postfix+=s.pop();

                if(s.peek()=='^') p2=3;
                else if(s.peek()=='*'||s.peek()=='/') p2=2;
                else if(s.peek()=='+'||s.peek()=='-') p2=1;
                else p2=-1;
            }
            s.push(c);
        }
    }
    while(!s.isempty())
    {
        postfix+=s.pop();
    }
    cout<<"\npostfix expression="<<postfix<<endl;
    return 0;
}
