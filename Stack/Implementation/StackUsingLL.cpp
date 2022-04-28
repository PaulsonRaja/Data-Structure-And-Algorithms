#include <iostream>
using namespace std;

struct Node {
    int val;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *create_node(int val)
{
    struct Node *new_node = new struct Node;
    new_node->val = val;
    new_node->next = NULL;

    return new_node;
}

void push(int val)
{
    struct Node *new_node = create_node(val);

    if (head == NULL) {
        head = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
}

void pop()
{
    struct Node *temp;

    if (head == NULL) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Popped element: " << head->val;
        temp = head;
        head = head->next;
        delete temp;
    }
    cout << "\n";
}

void display()
{
    if (head == NULL) {
        cout << "Stack is empty to display elements.\n";
    } else {
        cout << "Elements in stack for display.\n";
        struct Node *dummy_head = head;
        while (dummy_head != NULL) {
            cout << dummy_head->val << " ";
            dummy_head = dummy_head->next;
        }
    }
    cout << "\n";
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
