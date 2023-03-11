#include "container.h"

namespace encryption_methods {
  void Container::sort() {
    for (size_t i = 0; i < len - 1; ++i)
      for (size_t j = i + 1; j < len; ++j)
        if (array[i]->strsize() < array[j]->strsize()) {
          Encryption *tmp = array[i];
          array[i] = array[j];
          array[j] = tmp;
        }
  }
}
