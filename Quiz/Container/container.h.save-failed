#pragma once
#include "ShuffledContainer.h"
// if m<n throw invalid_argument
// contains integers from [n;m]
template <class T>
Container<T> containerNM1(const T &n, const T &m){
  if (m<n) throw std::invalid_argument("NM-container couldn't be empty!");
  vector<T> c;
  for ( ;n<=m;++n) c.push_back(n);
  Container<T> res;
  res.load(move(c));
  res.initShuffle();
  return res;
}


