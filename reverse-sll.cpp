#include <iostream>
#include <forward_list>

// Reverse a singly linked list
// **NOTE: I may have to create my own
// singly linked list class to be able
// to reverse a created list.
// I will create another github repository
// doing this.**

int main() {
    std::forward_list<int> my_list;

    my_list.push_front(1);
    my_list.push_front(8);
    my_list.push_front(7);

    return 0;
}