// Copyright 2020 Your Name <your_email>

#include <vector>

std::vector<int> plusesDeleter(std::vector<int>& result) {
  for (unsigned int i = 0; i < result.size(); i++) {
    if (result[i] > 0) {
      result.erase(result.begin() + i);
      i--;
    }
  }
  return result;
}
