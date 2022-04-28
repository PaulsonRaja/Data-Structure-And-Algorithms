#include <iostream>
using namespace std;

struct Node {
    int val;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

struct Node *create_node(int val)
{
    struct Node *new_node = new struct Node;
    new_node->val = val;
    new_node->next = NULL;

    return new_node;
}

void enqueue(int val)
{
    struct Node *new_node = create_node(val);

    if (front == NULL && rear == NULL) {
        front = new_node;
        rear = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }
}

void dequeue()
{
    struct Node *temp;

    if (front == NULL) {
        cout << "Queue is empty, unable to perfrom dequeue.\n";
    } else {
        cout << "Dequeued element is: " << front->val << "\n";
        temp = front;
        front = front->next;

        /* This case is for last element of the queue. */
        if (front == NULL)
            rear = NULL;

        delete temp;
    }
}

void display()
{
    struct Node *dummy_front = front;

    cout << "Elements in the queue:\n";
    if (front == NULL) {
        cout << "Queue is empty.\n";
    } else {
        while (dummy_front != NULL) {
            cout << dummy_front->val << " ";
            dummy_front = dummy_front->next;
        }
    }
    cout << "\n";
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}
