#include "cycle.h"

namespace encryption_methods {
  void Cycle::in(std::ifstream& in_file) {
    in_file >> step >> first_str >> second_str;
  }
} // namespace encryption_methods
