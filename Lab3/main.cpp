#include <iostream>
#include "./include/Queue.h"
#include "./include/ArrayQueue.h"
using namespace std;

int main()
{
    // implementing queue using array
    cout << "Queue using Array:" << endl;
    ArrayQueue A(5);

    A.enqueue(5);
    A.enqueue(7);
    A.enqueue(9);
    cout << "Front element: " << A.getFront() << endl;
    cout << "Back element: " << A.getRear() << endl;

    A.dequeue();
    cout << "Front element after dequeue: " << A.getFront() << endl;
    cout << "Back element after dequeue: " << A.getRear() << endl;

    A.enqueue(3);
    A.enqueue(0);
    cout << "Front element after enqueue: " << A.getFront() << endl;
    cout << "Back element after enqueue: " << A.getRear() << endl;

    // Queue using Linked List
    cout << endl
         << "Queue using Linked List:" << endl;

    Queue Li1;

    Li1.enqueue(5);
    Li1.enqueue(7);
    Li1.enqueue(9);
    cout << "Front element: " << Li1.getFront() << endl;
    cout << "Back element: " << Li1.getRear() << endl;

    Li1.dequeue();
    cout << "Front element after dequeue: " << Li1.getFront() << endl;
    cout << "Back element after dequeue: " << Li1.getRear() << endl;

    Li1.enqueue(3);
    Li1.enqueue(0);
    cout << "Front element after enqueue: " << Li1.getFront() << endl;
    cout << "Back element after enqueue: " << Li1.getRear() << endl;

    return 0;
}