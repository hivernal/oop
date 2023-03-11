#include "container.h"

namespace encryption_methods {
  void Container::filtered_out(std::ofstream &out_file, const int type) {
    out_file << "Container contains " << len << " elements." << std::endl;
    for (size_t i = 0; i < len; ++i) {
      switch (type) {
      case 1:
        array[i]->replacing_out(out_file, i);
        break;
      case 2:
        array[i]->cycle_out(out_file, i);
        break;
      case 3:
        array[i]->strtonum_out(out_file, i);
        break;
      }
    }
  }
} // namespace encryption_methods
