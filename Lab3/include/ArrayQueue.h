#ifndef ArrayQueue_h
#define ArrayQueue_h
#include "Queue.h"

class ArrayQueue
{
private:
    int size;
    int *array;

public:
    ArrayQueue(int size)
    {
        this->front = -1;
        this->rear = -1;
        this->size = size;
        this->array = new int[size];
    };

    ~ArrayQueue()
    {
        delete[] array;
    };

    bool isEmpty();
    void enqueue(int element);
    void dequeue();
    bool isFull();
    int getFront();
    int getRear();
    int front;
    int rear;
};

#endif