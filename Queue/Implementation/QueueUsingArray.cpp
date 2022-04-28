#include <iostream>
#define size 3
using namespace std;

int arr[size];
int front = 0;
int rear = 0;

int is_queue_full()
{
    if (rear == size)
        return 1;
    return 0;
}

int is_queue_empty()
{
    if (front == rear)
        return 1;
    return 0;
}

void enqueue(int val)
{
    if (is_queue_full()) {
        cout << "Queue is full.\n";
    } else {
        arr[rear] = val;
        rear++;
    }
}

void dequeue()
{
    if (is_queue_empty()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Dequeued element is: " << arr[front] << "\n";
        front++;
    }
}

void display()
{
    if (is_queue_empty()) {
        cout << "No elements in queue to display.\n";
    } else {
        cout << "Elements in queue to display:\n";
        for (int i = front; i < rear; ++i) {
            cout << arr[i] << " ";
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
    display();
    return 0;
}
