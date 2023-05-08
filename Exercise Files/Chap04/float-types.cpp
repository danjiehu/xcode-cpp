// float-types.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <format>
#include <iostream>

using std::format;
using std::cout;

// a byte is 8 bits
// size_t is an unsigned(non-negative) integer type compatile to work with sizeof operator
const size_t byte {8};

int main() {
    float f {500.0}; // f{5e2}
    double df {};
    long double ldf {};
    // from  integer, fload, double, to long double, scale goes up, precision goes down
    // in accounting, always use integer
    
    // printing out float, double, long double data type size in bit
    // the result will be different depending on the processor AND operating system design, this is NOT uncommon

    df = .1 + .1 + .1;
    
    
    cout << format("size of float f is {} bits\n", sizeof(f) * byte);
    cout << format("size of double df is {} bits\n", sizeof(df) * byte);
    cout << format("size of long double ldf is {} bits\n", sizeof(ldf) * byte);
    
    // using float: scale and precision is different
    // understand rounding error
    // {:.20f} means to represent it in 20 decimal points, we could see that the rounding error is significant
    cout << format("df is {:.20f}\n", df); // cout 0.300...0004 // rounding error
    
    if (df == .3) cout << "true\n";
    else cout << "false\n"; // false
    
}
