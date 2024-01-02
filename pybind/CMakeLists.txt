pybind11_add_module(py-myproject pybind.cpp)
target_link_libraries(py-myproject
                      PRIVATE
                      myproject::myproject_warnings
                      myproject::myproject_options
                      myproject::sample_library
                      spdlog::spdlog
                      fmt::fmt)
