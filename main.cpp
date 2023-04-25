#include "src/LinkedList.cpp"

int main()
{

    LinkedList list;
    // add to head
    list.addToHead(4);
    list.addToHead(3);
    list.addToHead(7);
    list.addToHead(2);

    // printing the list
    std::cout << "List:" << std::endl;
    list.print();

    // printing the size of the list
    std::cout << "List Size is " << list.getSize() << std::endl;

    // adding to the list at a particular index
    list.add(8, 2);
    std::cout << "List after adding 8 at index 2:" << std::endl;
    list.print();

    // add to tail
    std::cout << "Adding 9 to tail" << std::endl;
    list.addToTail(9);
    list.print();

    // removing form the tail
    std::cout << "removing from index 2:" << std::endl;
    list.remove(2);
    list.print();

    return 0;
}