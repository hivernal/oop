#include "container.h"

namespace encryption_methods {
  void Container::in(std::ifstream& in_file) {
    while (!in_file.eof() && len < MAX_SIZE) {
      if ((array[len] = in_data(in_file)) != 0)
        ++len;
    }
  }
}
