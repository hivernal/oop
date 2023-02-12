#include "container.h"

namespace encryption_methods {
  void Container::in(std::ifstream& in_file) {
    for (size_t i = 0; in_file.peek() != EOF && len < MAX_SIZE; ++i) {
      if ((array[i] = Encryption::in(in_file)) != 0)
        ++len;
    }
  }
}
