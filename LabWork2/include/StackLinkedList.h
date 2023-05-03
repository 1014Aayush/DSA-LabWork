class StackLinkedList {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* topNode;
public:
    StackLinkedList();
    ~StackLinkedList();
    bool isEmpty();
    void push(int element);
    int pop();
    int top();
};
