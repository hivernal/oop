#include "container.h"

#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "incorrect command line! Waited: command in_file out_file"
              << std::endl;
    return EXIT_FAILURE;
  }
  std::ifstream in_file(argv[1]);
  if (!in_file.is_open()) {
    std::cout << "Error to open input file" << std::endl;
    return EXIT_FAILURE;
  }
  std::ofstream out_file(argv[2]);
  if (!out_file.is_open()) {
    std::cout << "Error to open output file" << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << "Start" << std::endl;
  encryption_methods::Container cont;
  cont.in(in_file);
  out_file << "Filled container. " << std::endl;
  cont.filtered_out(out_file, 2);
  // cont.out(out_file);
  cont.clear();
  out_file << "Empty container. " << std::endl;
  std::cout << "Stop" << std::endl;
  in_file.close();
  out_file.close();
  return EXIT_SUCCESS;
}
