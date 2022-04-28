#include <iostream>
#define size 3
using namespace std;

int arr[size];
int top = -1;

int is_stack_full()
{
    if (top == size - 1)
        return 1;
    return 0;
}

int is_stack_empty()
{
    if (top == -1)
        return 1;
    return 0;
}

void push(int val)
{
    if (is_stack_full()) {
        cout << "Stack is full.\n";
    } else {
        ++top;
        arr[top] = val;
    }
}

void pop()
{
    if (is_stack_empty()) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Popped element is " << arr[top] << "\n";
        --top;
    }
}

void display()
{
    int dummy_top = top;

    if (is_stack_empty()) {
        cout << "No elements in stack to display.\n";
    } else {
        cout << "Displaying the elements in stack:\n";
        for (int i = dummy_top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    pop();
    display();
    pop();
    display();
    return 0;
}
