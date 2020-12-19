// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <vector>

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el){
  std::vector<int>::iterator v = first;
  while (v != last) {
    if (el == *v) {
      return v;
    }
    v++;
  }
  return v;
}
