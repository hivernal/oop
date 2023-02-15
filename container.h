#ifndef CONTAINER_H
#define CONTAINER_H

#include "encryption.h"

namespace encryption_methods {
  enum {MAX_SIZE = 100};
  class Container {
    int len;
    Encryption* array[MAX_SIZE];
  public:
    Container();
    ~Container();
    void clear();
    void in(std::ifstream &in_file);
    void out(std::ofstream &out_file);
    Encryption* in_data(std::ifstream &in_file);
  };
} // namespace encryption_methods

#endif // CONTAINER_H
