#pragma once

#include "Cuties.hpp"
#include <array>
using namespace std;

class QueueTeePies {
    public:
        void enqueue(Cutie* newCutie) {
            cuties[tail] = newCutie;
            tail++;
        }
        Cutie* dequeue() {
            Cutie* head = cuties[0];
            for (int x = 0; x < tail; x++) {
                cuties[x] = cuties[x+1];
            }
            tail--;
            return head;
        }
        int size() {
            return tail;
        }
    private:
        array<Cutie*, 100> cuties;
        int tail = 0;
};
