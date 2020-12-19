// Copyright 2020 Your Name <your_email>

#include <map>
#include <string>
#include <vector>
std::map<std::string, int> wordsMapCounter(std::string str) {
  std::vector<std::string> words;
  std::map<std::string, int> map;
  if (str.length() <= 1) {
    return map;
  } else {
    for (unsigned int i = 0; i < str.length(); i++) {
      str[i] = tolower(str[i]);
    }
    for (unsigned int i = 0; i < str.length(); i++) {
      if ((str[i] == ' ') || (str[i] == ',') || (str[i] == '.')) {
        if ((str[i + 1] == ' ') || (str[i + 1] == ',') || (str[i + 1] == '.')) {
          str.erase(i + 1, 1);
        }
      }
    }
    unsigned int j = 0;
    for (unsigned int i = 0; i < str.length(); i++) {
      if ((str[i + 1] == ' ') || (str[i + 1] == ',') || (str[i + 1] == '.')) {
        words.push_back(str.substr(j, i - j + 1));
        i++;
        j = i + 1;
      }
      if ((i + 1 == str.length()) && (str[i] != ' ') && (str[i] != ',') &&
          (str[i] != '.')) {
        words.push_back(str.substr(j, i - j + 2));
        i++;
      }
    }
    for (unsigned int i = 0; i < words.size(); i++) {
      int kol = 1;
      for (unsigned int k = i + 1; k < words.size(); k++) {
        if (words[i] == words[k]) {
          kol++;
          words.erase(words.begin() + k);
          k--;
        }
      }
      map.insert(make_pair(words[i], kol));
    }
    return map;
  }
}
