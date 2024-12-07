set(app ComputationalGeometryCTest)

target_link_libraries(${app} PRIVATE computational_geometry)
set_target_properties(${app} PROPERTIES CXX_CLANG_TIDY clang-tidy)
target_include_directories(${app} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>)

target_sources(${app} PRIVATE
  main.cpp
)