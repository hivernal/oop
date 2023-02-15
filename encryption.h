#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream>

namespace encryption_methods {
  enum {REPLACING = 1, CYCLE};
  class Encryption {
  public:
    // static Encryption* in(std::ifstream &in_file);
    virtual ~Encryption() {}
    virtual void in_data(std::ifstream& in_file) = 0;
    virtual void out(std::ofstream& out_file) = 0;
  };
} // namespace encryption_methods

#endif // ENCRYPTION_H
