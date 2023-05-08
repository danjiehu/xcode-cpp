// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

// c-stirng or primitive string used interchangably
// essentially an array of character (8-bit integer type but used for character)

using std::format;
using std::cout;

int main() {
     
    // const char s[] {"String"}; // this is a c string
    
    // MOST common way of declaring it as it is a pointer to an array of characters
    // just then you can't use enhanced for loop, that's just how it is
    const char* s {"String"}; // it is exactly the same as: const char s[] {"String"};
    // or const char* s = "String";
    
    // it is the same as doing: const char s[] {'S', 't', 'r', 'i', 'n', 'g', 0};
    // last character is technically '\0' but has the value of 0; when print out would be blank; it is called the "null terminator"
    // so this array has 7 elements, NOT 6
    
    cout << format("s is {}\n", s);
    
//    for (const auto& c : s) {
//        cout << format("c is {}\n", c);
//    }
    
//    for (const auto& c : s) {
//       if (c) cout << format("c is {}\n", c); // escape the terminator as it is falsy
//    }
    
    // VERY common practice:
    // *p is checking is \0, \0 would be falsy so print ends, ++p increment array by element size
    // then to print we dereference the value
    // array arr has the value of element beginning address, *arr gives the arr's first element value, ++arr increment the arr by element size (then we can dereference it to access element value so on and so forth)
    for (const auto* p = s; *p; ++p){
        cout << format("print using pointer {}\n", *p);
    }
}
