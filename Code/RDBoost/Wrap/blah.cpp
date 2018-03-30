//
// Copyright (c) 2018 Greg Landrum
//
//
#include <iostream>
#include <boost/python.hpp>
#include <boost/python/scope.hpp>
#include <boost/python.hpp>

namespace python = boost::python;

int main() {
  std::cerr<<"1"<<std::endl;
  python::arg a1("stupid");
  //std::cerr<<"1a"<<std::endl;
  //a1 = float(2.12);
  std::cerr<<"2"<<std::endl;
  a1 = int(2);
  std::cerr<<"2a"<<std::endl;
  a1 = int(3);
  std::cerr<<"3"<<std::endl;
  a1 = float(2.9);
  std::cerr<<"4"<<std::endl;
}



