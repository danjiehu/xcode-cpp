// pointer-incr.cpp by Bill Weinman <http://bw.org/>
// updated 2020-05-26
#include <format>
#include <iostream>
#include <cstdint>

using std::format;
using std::cout;

// 8 bit integer type, use int_type as alias
using int_type = uint8_t;
 // using int_type = uint16_t; // this will make point increment by two in array of this type - because address is represented in byte and one byte is 8 bit

void printp(const int_type* p) {
    // static_cast<const void*>(p) this is just to get the format function print the pointer
    cout << format("pointer is {}, value is {}\n", static_cast<const void*>(p), *p);
}

int main() {
    int_type arr[] { 1, 2, 3, 4, 5 };
    int_type* p = arr;
    // printp(++p);
    printp(++p); // increment then return, p's value is what's printed
    printp(p++); // return then increment
    printp(p++); // return then increment, p's value is not what's printed
    // pre increment is slightly more efficient than post increment
    
    printf("\n");
    
    printp(++p); // notice the jump there is a two byte jump because how we use pre and post differently
    printp(++p);
    printp(++p);
}
