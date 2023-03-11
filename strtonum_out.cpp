#include "strtonum.h"

namespace encryption_methods {
  void Strtonum::out(std::ofstream& out_file) {
    out_file << "Strtonum method: string = " << str 
             << "; number = "<< num << std::endl;
  }
}
