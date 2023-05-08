// operators.cpp by Bill Weinman [bw.org]
// updated 2022-06-17
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    auto x = 5;
    auto y = 47;
    cout << format("x is {}\n", x);
    cout << format("y is {}\n", y);
    
    // compound operator
    x += y; // adds y to x
    // x = x+y; difference: in compound operator x is evaluated once
    cout << format("x is {}\n", x);
    
    x += y;
    x -= y;
    x *= y;
    x /= y;
    x %= y;
    
}

