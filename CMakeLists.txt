# - Main CMake script for pp6calculator
#
# - Require latest generation pf CMake
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# - Declare the project
project(pp6calculator)

# - Use standard flag set when using the GNU/Clang compiler
include(CheckCXXCompilerFlag)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  # - Check for C++11 support, activating it if available
  if(HAS_GNUSTYLE_CPP11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
  endif()

  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic-errors -Wall -Wextra -Werror -Wfatal-errors -Wwrite-strings -Woverloaded-virtual -fno-nonansi-builtins -fno-gnu-keywords -fstrict-aliasing")
endif()

# - Tell compiler where to find headers
include_directories(PP6Lib FileReader-1.0.0)

# - Add the PP6 library
add_subdirectory(PP6Lib)

# - Add the FileReader library
add_subdirectory(FileReader-1.0.0)

# - Add the pp6calculator program
add_executable(pp6calculator pp6calculator.cpp)

# - Link pp6calculator to the pp6lib library
target_link_libraries(pp6calculator pp6lib FileReader)

# - Install pp6calculator to the bin subdirectory of CMAKE_INSTALL_PREFIX
install(TARGETS pp6calculator DESTINATION bin)

# - Package pp6calculator sources and executable
include(CPack)

