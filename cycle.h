#ifndef CYCLE_H
#define CYCLE_H

#include "encryption.h"

#define CYCLE 2

namespace encryption_methods {
  class Cycle : public Encryption {
    int step;
    std::string first_str, second_str;
  public:
    Cycle() : step(0), first_str(""), second_str("") {}
    void in(std::ifstream& in_file);
    void out(std::ofstream& out_file);
    void cycle_out(std::ofstream& out_file, const size_t index);
  };
} // namespace encryption_methods

#endif // CYCLE_H
