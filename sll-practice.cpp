#include <iostream>
#include <forward_list>

// Learning to use <forward_list> standard library

int main() {
    // Create singly linked list named 'list_a'
    std::forward_list<int> list_a;

    // push_front() adds elements to the front
    // of the singly linked list, so the
    // first added elements end up at the back
    // of the list when many elements are added
    // to the list
    list_a.push_front(1);
    list_a.push_front(8);
    list_a.push_front(7);

    // Printing elements using a range-based for loop
    for (auto index : list_a) {
        std::cout << index << std::endl;
    }

    return 0;
}