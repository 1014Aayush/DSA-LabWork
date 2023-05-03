#include "../include/StackLinkedList.h"
#include <iostream>
using namespace std;

StackLinkedList::StackLinkedList()
{
    topNode = nullptr;
}

StackLinkedList::~StackLinkedList()
{
    Node *current = topNode;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
}

bool StackLinkedList::isEmpty()
{
    return topNode == nullptr;
}

void StackLinkedList::push(int element)
{
    Node *newNode = new Node;
    newNode->data = element;
    newNode->next = topNode;
    topNode = newNode;
}

int StackLinkedList::pop()
{
    if (isEmpty())
    {
        cout << "Error: Stack is empty" << endl;
        return -1;
    }
    int element = topNode->data;
    Node *temp = topNode;
    topNode = topNode->next;
    delete temp;
    return element;
}

int StackLinkedList::top()
{
    if (isEmpty())
    {
        cout << "Error: Stack is empty" << endl;
        return -1;
    }
    return topNode->data;
}
