#include <myproject/sample_library.hpp>
#include <pybind11/pybind11.h>

PYBIND11_MODULE(example, module)
{
  module.doc() = "pybind11 example plugin";// optional module docstring

  module.def("add", &add, "A function that adds two numbers");
}
