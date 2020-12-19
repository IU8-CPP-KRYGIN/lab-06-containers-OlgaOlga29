// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <string>

int wordsCounter(const std::string& str) {
  if (str.length() == 0 || str.length() == 1) {
    return 0;
  }
  std::string s = str;
  for (unsigned int i = 0; i < s.length(); i++) {
    if (((s[i] == ' ') || (s[i] == '.') || (s[i] == ',')) &&
        ((s[i + 1] == ' ') || (s[i + 1] == '.') || (s[i + 1] == ','))) {
      s.erase(i, 1);
    }
  }
  int count = 1;
  for (unsigned int i = 0; i < str.length(); i++) {
    if (((s[i] == ' ') || (s[i] == '.') || (s[i] == ','))) {
      count++;
    }
  }
  return count;
}
