# - CMake scrip for pp6lib library
#

# - Add library
add_library(pp6lib STATIC PP6Math.cpp PP6Math.hpp PP6Physics.cpp PP6Physics.hpp ClassFourVector.cpp ClassFourVector.hpp StructFourVector.cpp StructFourVector.hpp ClassThreeVector.cpp ClassThreeVector.hpp Particle.cpp Particle.hpp)
