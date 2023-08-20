#include <pybind11/pybind11.h>
#include "my_library/my_class.h"

namespace py = pybind11;
using namespace my_library;

PYBIND11_MODULE(my_module, m) {
    py::class_<MyClass>(m, "MyClass")
        .def(py::init<>())
        .def("do_something", &MyClass::doSomething);
}
