#include "cycle.h"

namespace encryption_methods {
  void Cycle::in_data(std::ifstream& in_file) {
    in_file >> step >> first_str >> second_str;
  }
}
