#include <iostream>
#include "../include/LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
};

LinkedList::~LinkedList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        Node *next = temp->next;
        delete temp;
        temp = next;
    }
};
void LinkedList::addToHead(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    if (tail == nullptr)
    {
        tail = newNode;
    }
    size++;
};

void LinkedList::add(int data, int index)
{
    Node *newNode = new Node;
    newNode->data = data;
    if (index == 0)
    {
        addToHead(data);
    }
    else if (index == size)
    {
        addToTail(data);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
};

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    if (tail == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
};

void LinkedList::removeHead()
{
    if (head == nullptr)
    {
        std::cout << "List is empty" << std::endl;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }
};

void LinkedList::removeTail()
{
    if (head == NULL)
    {
        std::cout << "List is empty" << std::endl;
    }
    else if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        size--;
    }
    else
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
        size--;
    }
};
void LinkedList::remove(int index)
{
    if (index == 0)
    {
        removeHead();
    }
    else if (index == size - 1)
    {
        removeTail();
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
        size--;
    }
};

int LinkedList::getSize()
{
    return size;
};

void LinkedList::print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
};

// Path: src/LinkedList.cpp