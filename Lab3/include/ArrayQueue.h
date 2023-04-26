#ifndef ArrayQueue_h
#define ArrayQueue_h
#include "Queue.h"

class ArrayQueue : public Queue
{
public:
    ArrayQueue();
    ~ArrayQueue();
    bool isEmpty();
    void enqueue(int item);
    void dequeue();
    bool isFull();
    void front();
    void back();
    void display();
    int frontIndex;
    int rearIndex;
};

#endif