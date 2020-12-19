// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <vector>

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el){
  std::vector<int>::iterator v = first;
  if((el < *first) && (el > *last)){
    return last;
  }
  else{
    while (v != last) {
      if (el == *v) {
        return v;
      }
      v++;
    }
    return v;
  }
}