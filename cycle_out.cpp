#include "cycle.h"

namespace encryption_methods {
  void Cycle::cycle_out(std::ofstream& out_file, const size_t index) {
    out_file << index << ": ";
    out(out_file);
  }

  void Cycle::out(std::ofstream& out_file) {
    out_file << "Cycle method: step = " << step
             << "; first string = " << first_str 
             << "; second string = "<< second_str << std::endl;
  }
}
