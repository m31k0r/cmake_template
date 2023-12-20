#include <fmt/format.h>

#include <CLI/CLI.hpp>

// This file will be generated automatically when cur_you run the CMake
// configuration step. It creates a namespace called `myproject`. You can modify
// the source template at `configured_files/config.hpp.in`.
#include <internal_use_only/config.hpp>
int main(int argc, const char **argv) noexcept
{
  try {
    CLI::App app{ fmt::format("{} version {}", myproject::cmake::PROJECT_NAME, myproject::cmake::PROJECT_VERSION) };

    bool show_version = false;
    app.add_flag("--version", show_version, "Show version information");


    CLI11_PARSE(app, argc, argv);
    if (show_version) {
      fmt::print("{}\n", myproject::cmake::PROJECT_VERSION);
      return EXIT_SUCCESS;
    }
  } catch (...) {
    return EXIT_FAILURE;
  }
}
