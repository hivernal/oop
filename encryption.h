#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream>

namespace encryption_methods {
  enum {REPLACING = 1, CYCLE};
  class Encryption {
    public:
      Encryption* in(std::ifstream& in_file);
      virtual void in_data(std::ifstream& in_file);
      virtual void out(std::ofstream& out_file);
  };
}

#endif // ENCRYPTION_H
