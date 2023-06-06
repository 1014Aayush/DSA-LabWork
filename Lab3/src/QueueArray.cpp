#include "../include/ArrayQueue.h"
#include <iostream>
using namespace std;

bool ArrayQueue::isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ArrayQueue::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ArrayQueue::enqueue(int item)
{

    if (!isFull())
    {
        if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        rear++;
        array[rear] = item;
    }

    else
    {
        cout << "Cannot Enter";
    }
}

void ArrayQueue::dequeue()
{
    if (!isEmpty())
    {
        int temp = array[front];
        front++;
        cout << "removed " << temp << endl;
    }
    else
    {
        cout << "Cannot Dequeue" << endl;
    }
}

int ArrayQueue::getFront()
{
    return front;
    cout << "front is at" << front << endl;
}

int ArrayQueue::getRear()
{
    return rear;
    cout << "Back is at" << rear << endl;
}
