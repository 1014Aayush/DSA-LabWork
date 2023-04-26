#include "../include/Queue.h"
#include <iostream>
#include "main.cpp"
#define MAX_QUEUE_SIZE 5;

using namespace std;

Queue::Queue()
{
    frontIndex = -1;
    backIndex = -1;
}

bool Queue::isFull()
{
    if ((frontIndex - 1) == backIndex)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isEmpty()
{
    if (frontIndex == backIndex)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::enqueue(int item)
{

    if (!isFull())
    {
        backIndex = (backIndex + 1) % MAX_QUEUE_SIZE;
        queueArr[backIndex] = item;
    }
    else
    {
        cout << "Cannot Enter";
    }
}

void Queue::dequeue()
{
    if (!isEmpty())
    {
        int temp = queueArr[frontIndex];
        cout << "removed " << temp << endl;
    }
    else
    {
        cout << "Cannot Dequeue" << endl;
    }
}

void Queue::front()
{
    cout << "front is at" << frontIndex << endl;
}

void Queue::back()
{
    cout << "Back is at" << backIndex << endl;
}
