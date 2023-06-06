#include "../include/Queue.h"
#include <iostream>
using namespace std;

// Adds an element into the queue
void Queue::enqueue(int element)
{
    Node *newNode = new Node;
    newNode->data = element;
    newNode->next = nullptr;

    // If queue is empty
    if (isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

// Removes an element from the queue
void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty. Cannot dequeue." << endl;
    }
    else
    {
        Node *temp = front;
        front = front->next;
        delete temp;
    }
}

// Checks if the queue is empty
bool Queue::isEmpty()
{
    return front == nullptr;
}

// Checks if the queue is full
bool Queue::isFull()
{
    return false; // Linked list implementation cannot be full
}

// Gives the element at the front
int Queue::getFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty. No front element." << endl;
        return -1;
    }
    else
    {
        return front->data;
    }
}

// Gives the element at the rear
int Queue::getRear()
{
    if (isEmpty())
    {
        cout << "Queue is empty. No rear element." << endl;
        return -1;
    }
    else
    {
        return rear->data;
    }
}
