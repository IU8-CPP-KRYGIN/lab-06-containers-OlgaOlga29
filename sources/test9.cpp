// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <list>

std::list<int> Sort(std::list<int>& result) {
  std::list<int>::iterator one = result.begin();
  std::list<int>::iterator last = result.end();
  std::list<int>::iterator plus = one++;
  for (std::list<int>::iterator i = one; i != last; i++) {
    for (std::list<int>::iterator g = plus; g != last; g++) {
      if ((*i) > (*g)) {
        std::swap(*i, *g);
      }
    }
  }
  return result;
}
