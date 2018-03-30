//
// Copyright (c) 2018 Greg Landrum
//
//
#include <iostream>
#include <boost/python.hpp>
#include <boost/python/scope.hpp>
#include <boost/python.hpp>

namespace python = boost::python;

BOOST_PYTHON_MODULE(rdBase) {
  std::cerr<<1<<std::endl;
  python::arg a1("stupid");
  std::cerr<<2<<std::endl;
  a1 = float(2.10);
  std::cerr<<3<<std::endl;
  a1 = int(2);
  std::cerr<<4<<std::endl;
  a1 = float(2.30);
  std::cerr<<5<<std::endl;
}
