#include "container.h"
#include "cycle.h"
#include "replacing.h"

namespace encryption_methods {
  Encryption* Container::in_data(std::ifstream& in_file) {
  int key;
  in_file >> key;
  if (in_file.eof())
    return 0;

  Encryption* encr;
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
