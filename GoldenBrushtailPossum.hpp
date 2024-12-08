#pragma once

#include "Cutie.hpp"
#include <string>
using namespace std;

class GoldenBrushtailPossum : public Cutie {
  string description() override {
    return "A little golden brushtail possum with big, sad eyes, and a yellow coat.";
  }

  int cuteness_rating() override {
    return 11; // This golden brushtail possum gets an 11 / 10 for its cuteness. Such a good boy!
  }
};
