#include "replacing.h"

namespace encryption_methods {
  void Replacing::out(std::ofstream& out_file) {
    out_file << "Replacing method: first string = " << first_str 
             << "; second string = "<< second_str
             << "; owner = " << owner << std::endl;
  }
}
