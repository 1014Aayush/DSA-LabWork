#include "src/ArrayStack.cpp"
#include "src/StackLinkedList.cpp"
#include <iostream>
using namespace std;

int main()
{
    // Taking the size of the stack from the user
    int sizeofarray;
    cout << "Enter The size of stack" << endl;
    cin >> sizeofarray;

    // Creating the stack from array
    ArrayStack stack(sizeofarray);
    int value;
    for (int i = 0; i < sizeofarray; i++)
    {
        cout << "Enter The element to put inside stack" << endl;
        cin >> value;
        cout << "Adding " << value << " to the stack..." << endl;
        stack.push(value);
    }

    cout << "Adding 5 to the stack...But It Should Print Size limit Reached since the size of array is " << sizeofarray << endl;
    cout << "Try Adding 5 to the stack..." << endl;
    stack.push(5);

    cout << "Displaying the topmost element of the Stack:" << endl;
    cout << stack.peek() << endl;

    cout << "Removing the topmost element of the Stack one by one:" << endl;
    for (int i = 0; i < sizeofarray; i++)
        cout << stack.pop() << endl;

    cout << "Since all the elemets are removed it cannot return any more" << endl;
    cout << stack.pop();

    // Stack from Linked List
    StackLinkedList stackLinked;
    cout << "" << endl;
    cout << "Implementing Stack from Linked List" << endl;
    cout << "" << endl;

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << "Enter The element to put inside stack" << endl;
        cin >> value;
        stackLinked.push(value);
    }

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << "Removing the topmost element of the Stack one by one:" << endl;
        cout << "peeking top most element: " << stackLinked.top() << endl;
        cout << "popped element: " << stackLinked.pop() << endl;
    }
}