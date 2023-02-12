#include "container.h"

#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "incorrect command line!\
                  Waited: command in_file out_file" << std::endl;
    exit(EXIT_FAILURE);
  }
  std::ifstream in_file(argv[1]);
  std::ofstream out_file(argv[2]);
  std::cout << "Start" << std::endl;
  encryption_methods::Container cont;
  cont.in(in_file);
  out_file << "Filled container. " << std::endl;
  cont.out(out_file);
  cont.clear();
  out_file << "Empty container. " << std::endl;
  cont.out(out_file);
  std::cout << "Stop" << std::endl;
  return EXIT_SUCCESS;
}
