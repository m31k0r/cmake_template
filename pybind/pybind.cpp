#include <myproject/sample_library.hpp>
#include <pybind11/pybind11.h>


PYBIND11_MODULE(example, module)
{
  module.doc() = "pybind11 example plugin";// optional module docstring

  module.def("factorial", &factorial, "A recursive function for the factorial");
}
