#ifndef CYCLE_H
#define CYCLE_H

#include "encryption.h"

namespace encryption_methods {
  class Cycle : public Encryption {
    int step;
    std::string first_str, second_str;
  public:
    Cycle() : step(0), first_str(""), second_str("") {}
    void in_data(std::ifstream& in_file);
    void out(std::ofstream& out_file);
  };
} // namespace encryption_methods

#endif // CYCLE_H
