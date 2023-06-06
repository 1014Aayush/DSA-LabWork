#ifndef Queue_h
#define Queue_h

class Queue
{
private:
    struct Node
    {
        int data;
        Node *next;
    };

    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    };

    ~Queue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    };

    void enqueue(int element);
    void dequeue();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
};

#endif