#include "strtonum.h"

namespace encryption_methods {
  void Strtonum::in(std::ifstream& in_file) {
    in_file >> str >> num;
  }
}
