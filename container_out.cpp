#include "container.h"

namespace encryption_methods {
  void Container::out(std::ofstream& out_file) {
    out_file << "Container contains " << len << " elements." << std::endl;
    for (int i = 0; i < len; ++i) {
      out_file << i << ": ";
      array[i]->out(out_file);
    }
  }
} // namespace encryption_methods
