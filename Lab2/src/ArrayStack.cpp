#include "../include/ArrayStack.h"
#include <iostream>

ArrayStack::ArrayStack(int size)
{
    this->size = size;
    this->top = -1;
    this->arr = new int[size];
};

ArrayStack::~ArrayStack()
{
    delete[] arr;
};

void ArrayStack::push(int data)
{
    if (isFull())
    {
        std::cout << "Array Size Full " << std::endl;
    }
    else
    {
        top++;
        arr[top] = data;
    }
};

int ArrayStack::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack is Empty" << std::endl;
        return 0;
    }
    else
    {
        int data = arr[top];
        top--;
        return data;
    }
};

int ArrayStack::peek()
{
    if (isEmpty())
    {
        std::cout << "Stack Is Empty " << std::endl;
        return -1;
    }
    else
    {
        return arr[top];
    }
};

bool ArrayStack::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool ArrayStack::isFull()
{
    if (top == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
};
