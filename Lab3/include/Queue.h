#ifndef Queue_h
#define Queue_h
#define MAX_QUEUE_SIZE 5;

class Queue
{
public:
    Queue(){};
    ~Queue(){};
    virtual void enqueue(int item);
    virtual void dequeue();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void front();
    virtual void back();
    virtual void display();
    int frontIndex;
    int backIndex;

private:
    int Queue::queueArr[5];
};

#endif