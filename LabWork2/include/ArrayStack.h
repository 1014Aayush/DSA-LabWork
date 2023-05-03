
class ArrayStack
{
private:
    int top;
    int size;
    int *arr;

public:
    ArrayStack(int size);
    ~ArrayStack();
    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};