#include "replacing.h"

namespace encryption_methods {
  void Replacing::in(std::ifstream& in_file) {
    in_file >> first_str >> second_str >> owner;
  }
}
