// array.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    
    // int& reference means that we don't make a copy of the value
    // const here means that we can't change the array value while looping through it
    for(const int& i : array) {
        cout << format("{} ", i);
    }
    cout << '\n';
}
