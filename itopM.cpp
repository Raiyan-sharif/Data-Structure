#include<iostream>
#include<sstream>
#include<string>
using namespace std;


class stack
{
    char s[100];
    int t;
public:
    stack()
    {
        t=-1;
    }
    void push(char a)
    {
        s[++t]=a;
    }
    void pop()
    {
        s[t--];
    }
    char top()
    {
        return s[t];
    }
    bool empty()
    {
        if(t==-1)
            return true;
        else
            return false;
    }
};


int Rank(char a)
{
    int temp;

    if (a == '^')
        temp = 1;
    else  if (a == '*' || a == '/')
        temp = 2;
    else  if (a == '+' || a == '-')
        temp = 3;

    return temp;
}

int main()
{
    string infix;

    cout << "Enter Infix: " << endl;
    cin >> infix;

    stack operator_stack;
    char output[100];
    int s=0;

    for(int i=0; i<infix.length(); i++)
    {
        if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
        {
            while (!operator_stack.empty() && Rank(operator_stack.top()) <= Rank(infix[i]))
            {
                output[s++]=operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.push(infix[i]);
        }
        else if(infix[i] == '(')
        {
            operator_stack.push(infix[i]);
        }
        else if(infix[i] == ')')
        {
            while (operator_stack.top() != '(')
            {
                output[s++]=operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.pop();
        }
        else
        {
            output[s++]=infix[i];
        }
    }

    while (!operator_stack.empty())
    {
        output[s++]=operator_stack.top();
        operator_stack.pop();
    }

    int counter=0;

    for(int i=0;i<infix.length();i++)
    {
        if(infix[i]=='('||infix[i]==')')
            counter++;
    }

    for(int i=0;i<infix.length()-counter;i++)
    {
        cout << output[i];
    }

    return 0;
}

