#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream>

namespace encryption_methods {
  class Encryption {
  public:
    virtual ~Encryption() {}
    virtual void in(std::ifstream& in_file) = 0;
    virtual void out(std::ofstream& out_file) = 0;
  };
} // namespace encryption_methods

#endif // ENCRYPTION_H
