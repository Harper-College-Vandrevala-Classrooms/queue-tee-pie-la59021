#pragma once

#include "Cutie.hpp"
#include <string>
using namespace std;

class Kitten : public Cutie {
  string description() override {
    return "A little kitten with big, sad eyes";
  }

  int cuteness_rating() override {
    return 11; // This kitten gets an 11 / 10 for its cuteness. Such a good boy!
  }
};
