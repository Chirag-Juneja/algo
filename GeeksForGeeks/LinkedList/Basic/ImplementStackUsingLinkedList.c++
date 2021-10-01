/*
Implement Stack using Linked List
*/

#include <bits/stdc++.h>

using namespace std;

struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int x)
    {
        data = x;
        next = NULL;
    }
};

class MyStack
{
private:
    StackNode *top;

public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

void MyStack ::push(int x)
{
    if (top == NULL)
    {
        top = new StackNode(x);
    }
    else
    {
        StackNode *node = new StackNode(x);
        node->next = top;
        top = node;
    }
}

int MyStack ::pop()
{
    if (top == NULL)
    {
        return -1;
    }
    StackNode *prev = top;
    top = top->next;
    return prev->data;
}

int main()
{
    MyStack stack = MyStack();
    stack.push(5);
    stack.push(4);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
}