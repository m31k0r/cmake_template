#ifndef SAMPLE_LIBRARY_HPP
#define SAMPLE_LIBRARY_HPP

#include <myproject/sample_library_export.hpp>

[[nodiscard]] SAMPLE_LIBRARY_EXPORT int factorial(int /*t_input*/) noexcept;

// Allow recursive functions
// NOLINTNEXTLINE(misc-no-recursion)
[[nodiscard]] constexpr int factorial_constexpr(int t_input) noexcept
{
  if (t_input == 0) { return 1; }

  return t_input * factorial_constexpr(t_input - 1);
}

#endif
