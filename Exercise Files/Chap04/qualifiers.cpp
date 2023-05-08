// qualifiers.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <iostream>
#include <format>

// CV qualitfiers:
// const, mutable,volatile

// Storage Duraiton:
// static, register, extern
// static variable has the lifetime of a program instead of executable block

using std::cout;
using std::format;

int func() {
    static int x {7};
    return ++x;
}

int main() {
    int i {42};
    cout << format("The integer is {}\n", i);
    
    cout << format("func returns {}\n", func());
    cout << format("func returns {}\n", func());
    cout << format("func returns {}\n", func());
}

