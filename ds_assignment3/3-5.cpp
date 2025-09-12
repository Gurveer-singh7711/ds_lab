#include<iostream>
#include<string>
using namespace std;
#define max 100

class stack
{
private:
    int a[max];
    int top=-1;
public:
    void push(int x)
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
    int pop()
    {
        if(top==-1)
        {
            cout<<"\nstack underflow\n";
            return 0;
        }
        else
        {
            int var=a[top];
            cout<<"\npoped out "<<a[top]<<endl;
            top--;
            return var;
        }
    }
    int isempty()
    {
        return (top==-1);
    }
    int peek()
    {
        if(top==-1) return -1;
        return a[top];
    }
};

int main()
{
    string postfix;
    stack s;
    cout<<"\nenter postfix expression=";
    getline(cin,postfix);

    for(int i=0;i<postfix.length();i++)
    {
        char c=postfix[i];

        if(c>='0' && c<='9')
        {
            int val=c-'0';
            s.push(val);
        }
        else
        {
            int val2=s.pop();
            int val1=s.pop();
            int res;

            if(c=='+') res=val1+val2;
            else if(c=='-') res=val1-val2;
            else if(c=='*') res=val1*val2;
            else if(c=='/') res=val1/val2;

            s.push(res);
        }
    }

    cout<<"\nfinal result="<<s.pop()<<endl;
    return 0;
}
