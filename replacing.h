#ifndef REPLACING_H
#define REPLACING_H

#include "encryption.h"

#define REPLACING 1

namespace encryption_methods {
  class Replacing : public Encryption {
    std::string first_str, second_str;
  public:
    Replacing() : first_str(""), second_str("") {}
    void in(std::ifstream& in_file);
    void out(std::ofstream& out_file);
    size_t strsize() {return first_str.size();}
  };
} // namespace encryption_methods

#endif // REPLACING_H
