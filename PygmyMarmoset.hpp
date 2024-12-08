#pragma once

#include "Cutie.hpp"
#include <string>
using namespace std;

class PygmyMarmoset : public Cutie {
  string description() override {
    return "A little pygmy marmoset with big, sad eyes";
  }

  int cuteness_rating() override {
    return 11; // This pygmy marmoset gets an 11 / 10 for its cuteness. Such a good boy!
  }
};
