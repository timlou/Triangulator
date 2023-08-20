find_package(pybind11 REQUIRED)

pybind11_add_module(my_module my_module.cpp)
target_link_libraries(my_module PRIVATE my_library)

