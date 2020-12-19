// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <string>

int diffWordsCounter(const std::string& str) {
  std::vector<std::string> vec;
  if (str.length() <= 1) {
    return 0;
  }
  std::string s = str;
  for (unsigned int i = 0; i < s.length(); i++) {
    if (((s[i] == ' ') || (s[i] == '.') || (s[i] == ',')) &&
        ((s[i + 1] == ' ') || (s[i + 1] == '.') || (s[i + 1] == ','))) {
      s.erase(i, 1);
    }
  }
  unsigned int j = 0;
  for (unsigned int i = 0; i < s.length(); i++) {
    if ((s[i + 1] == ' ') || (s[i + 1] == ',') || (s[i + 1] == '.')) {
      vec.push_back(s.substr(j, i - j + 1));
      i++;
      j = i + 1;
    }
    if ((i + 1 == s.length()) && (s[i] != ' ') && (s[i] != ',') &&
        (s[i] != '.')) {
      vec.push_back(s.substr(j, i - j + 2));
      i++;
    }
  }
  for (unsigned int i = 0; i < vec.size(); i++) {
    for (unsigned int g = i + 1; g < vec.size(); g++) {
      if (vec[i] == vec[g]) {
        vec.erase(vec.begin() + g);
        g--;
      }
    }
  }
  return vec.size();
}
