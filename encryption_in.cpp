#include "cycle.h"
#include "encryption.h"
#include "replacing.h"

namespace encryption_methods {
  Encryption *Encryption::in(std::ifstream &in_file) {
    int key;
    in_file >> key;
    Encryption *encr;
    switch (key) {
    case REPLACING:
      encr = new Replacing;
      break;
    case CYCLE:
      encr = new Cycle;
      break;
    default:
      return 0;
    }
    encr->in_data(in_file);
    return encr;
  }
} // namespace encryption_methods
