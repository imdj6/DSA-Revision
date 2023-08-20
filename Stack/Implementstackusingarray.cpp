#include <iostream>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    // push
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow cannot push more"<<endl;
        }
    }
    // pop
    void pop()
    {
        if (top == -1)
        {
            cout << "Caanot pop stack is empty"<<endl;
        }
        else
        {
            top = top - 1;
        }
    }
    // getTop
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    // getSize();
    int getSize()
    {
        return top + 1;
    }
};
int main()
{
    // implementing stack using single array

    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.getTop()<<endl;
    cout<<s.getSize()<<endl;




    return 0;
}