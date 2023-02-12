#include "container.h"

namespace encryption_methods {
  Container::Container() : len(0) {}
  Container::~Container() {clear();}

  void Container::clear() {
    while (len > 0) {
      delete array[len];
      --len;
    }
  }
} // namespace encryption_methods
