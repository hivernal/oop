#ifndef REPLACING_H
#define REPLACING_H

#include "encryption.h"

namespace encryption_methods {
  class Replacing : public Encryption {
    std::string first_str, second_str;
  public:
    Replacing() : first_str(""), second_str("") {}
    void in_data(std::ifstream& in_file);
    void out(std::ofstream& out_file);
  };
} // namespace encryption_methods

#endif // REPLACING_H
