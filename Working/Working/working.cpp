// range-for.cpp by Bill Weinman [bw.org]
// updated 2022-05-23
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    const char string[] {"string"};
        
    for (const auto& e : array) {
        cout << format("element is {}\n", e);
    }
    
    for (const auto& e : string){
        if (e == 0) break; // this is important this is checking the end of the string
        cout  << format("element is {}\n", e);
    }
}
