// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <list>
#include <map>
#include <string>
#include <vector>

std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last, int el);
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last,
                                        int el);
int wordsCounter(const std::string& str);
std::map<std::string, int> wordsMapCounter(std::string str);
std::vector<std::string> uniqueWords(const std::string& str);
int diffWordsCounter(const std::string& str);
std::list<int> reverseNum(std::list<int>& result);
std::vector<int> plusesDeleter(std::vector<int>& result);
std::list<int> Sort(std::list<int>& result);

#endif  // INCLUDE_HEADER_HPP_
