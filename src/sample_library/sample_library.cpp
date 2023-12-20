#include <myproject/sample_library.hpp>
int add(int t_first, int t_second) noexcept { return t_first + t_second; }
int factorial(int t_input) noexcept
{
  int result = 1;

  while (t_input > 0) {
    result *= t_input;
    --t_input;
  }

  return result;
}
