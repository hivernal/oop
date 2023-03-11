#ifndef STRTONUM_H
#define STRTONUM_H

#include "encryption.h"

#define STRTONUM 3

namespace encryption_methods {
  class Strtonum : public Encryption {
    std::string str;
    long num;
  public:
    Strtonum() : str(""), num(0) {}
    void in(std::ifstream& in_file);
    void out(std::ofstream& out_file);
  };
} // namespace encryption_methods

#endif // STRTONUM_H
