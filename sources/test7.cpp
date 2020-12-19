// Copyright 2020 Your Name <your_email>

#include <header.hpp>
#include <list>

 std::list<int> reverseNum(std::list<int>& result){
  std::list<int>::iterator one = result.begin();
  std::list<int>::iterator last = result.end();
  while(one!=last){
    if(*one!=0){
      result.insert(one, -1**one);
    }
    one++;
  }
  return result;
}
