#include "Cuties.hpp"
#include "QueueTeePies.hpp"
#include <cassert>
#include <iostream>
using namespace std;

int main() {
    // Create a bunch of objects that conform to the Cutie interface
    Puppy puppy;
    Kitten kitty;
    PygmyMarmoset marmoset;

    // Create a queue data structure
    QueueTeePies queue;

    // The size of the queue should equal zero since there are no objects in it
    assert(queue.size() == 0);

    // Add the cuties to the queue
    queue.enqueue(&puppy);
    queue.enqueue(&kitty);
    queue.enqueue(&marmoset);

    // The size of the queue should equal three since there are three objects in it
    assert(queue.size() == 3);

    // The first dequeue should return the puppy
    assert(queue.dequeue() == &puppy);

    // The second dequeue should return the kitty
    assert(queue.dequeue() == &kitty);

    // The first dequeue should return the pygmy marmoset
    assert(queue.dequeue() == &marmoset);

    cout << "the example works" << endl;
    
    return 0;
}