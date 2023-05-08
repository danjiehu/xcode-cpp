// typedef.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <format>
#include <iostream>
#include <cstdint>

using std::format;
using std::cout;

// renaming type uint32_t to points_t
// renaming type uint64_t to rank_t
// it's just alias

//typedef uint32_t points_t;
//typedef uint64_t rank_t;

// does the same thing as the two typedef lines above
using points_t = uint32_t;
using rank_t = uint64_t;

struct score {
    points_t p {};
    rank_t r {};
};

int main() {
    // initializer
    score s { 5, 1 };
    cout << format("score s had {} points and a rank of {}\n", s.p, s.r);
}
