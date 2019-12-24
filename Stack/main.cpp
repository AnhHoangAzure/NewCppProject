#include <iostream>
#define MAX 10
using namespace std;
class Stack{
    int top;
public:
    int a[MAX] = {-1};
    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};
bool Stack::push(int x)
{
    if(top >= MAX - 1)
    {
        cout<<"Stack overflow"<<endl;
        return false;
    }
    else{
        a[++top] = x;
        cout<<"x: "<<x<<" is pushed into stack"<<endl;
        return true;
    }
}
int Stack::pop(){
    if(top < 0)
    {
        cout<< "Stack underflow"<<endl;
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.pop() << " Popped from stack\n";
    cout << s.pop() << " Popped from stack\n";
    cout << s.pop() << " Popped from stack\n";
    return 0;
}
