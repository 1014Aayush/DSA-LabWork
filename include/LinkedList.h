#ifndef LinkedList_h
#define LinkedList_h

class LinkedList{
    private:
        class Node{
            public:
            int data;
            Node *next;
        };
        Node *head;
        Node *tail;
        int size;
    public:
        ~LinkedList();
        LinkedList();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data, int index);
        void removeHead();
        void removeTail();
        void remove(int index);
        int getSize();
        void print();
};

#endif /* LinkedList_h */