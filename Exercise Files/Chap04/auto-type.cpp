// auto-type.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>
#include <typeinfo>

using std::format;
using std::cout;

int main() {
    std::string s {"This is a string"};
    auto x = s;
    // because auto derives its type, it cannot be left uninitialized
    cout << format("x is {}\n", x);
    
    // typeid(x).name() will give very different result in different operating system
    // auto takes care of that and derive it from the type of s
    cout << format("type of x is {}\n", typeid(x).name());
}
