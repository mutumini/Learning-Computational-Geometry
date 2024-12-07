add_library(computational_geometry STATIC)

set_target_properties(computational_geometry PROPERTIES CXX_CLANG_TIDY clang-tidy)
target_include_directories(computational_geometry PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>)

target_sources(computational_geometry PRIVATE
  Bar.cpp
)
