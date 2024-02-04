#include <tbb/tbb.h>
#include <cpp11.hpp>
using namespace cpp11;

[[cpp11::register]]
void cpp_fun() {
    std::vector<int> v {1, 2, 3, 4, 5};
    tbb::parallel_for(size_t(0), v.size(), [&](size_t i) { sqrt(v[i]); });
}
