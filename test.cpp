#include "Cuties.hpp"
#include "QueueTeePies.hpp"
#include <cassert>
#include <array>
#include <iostream>
using namespace std;

#define SUCCESS "[\033[32mOK\033[0m] "

int main() {
    Puppy puppy;
    Kitten kitty;
    PygmyMarmoset marmoset;
    GoldenBrushtailPossum possum;

    QueueTeePies queue;

    assert(queue.size() == 0);
    queue.enqueue(&puppy);
    assert(queue.size() == 1);
    queue.enqueue(&kitty);
    assert(queue.size() == 2);
    queue.enqueue(&marmoset);
    assert(queue.size() == 3);
    queue.enqueue(&possum);
    assert(queue.size() == 4);
    cout << SUCCESS << ".enqueue() passed all tests." << endl;
    cout << SUCCESS << ".size() passed all tests." << endl;

    assert(queue.dequeue() == &puppy);
    assert(queue.dequeue() == &kitty);
    assert(queue.dequeue() == &marmoset);
    assert(queue.dequeue() == &possum);
    cout << SUCCESS << ".dequeue() passed all tests." << endl;

    cout << SUCCESS << "QueueTeePies class passed all tests." << endl;
    
    return 0;
}