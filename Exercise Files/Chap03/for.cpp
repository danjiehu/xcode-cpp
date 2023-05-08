#include<iostream>
#include<format>

using std::format;
using std::cout;

int main(){
    int array[] {1,2,3,4,5};
    
    // iterating through array
    for (int i{0}; i<5; i++){
        cout << format("element {} is {}\n", i, array[i]);
    }
    
    // iterating through a string
    // a c string is terminated with a null
    // so string "hello" have 6 position with the sixth position being null
    const char string[] {"hello"};
    for (int i{0}; string[i]; i++){
        // string[i] is taking advantage that zero is always false so that the string will iterate until it runs into the end of the string which is null (false)
        cout << format("element {} is {}\n", i, string[i]);
    }
    
    // iterating through pointer
    // ! the value of an array in c/c++ is the beginning of its address - that's why we can initialize variable like this auto* p = string;  p is going to be the address of the start of the array
    // *p is deference the pointer to get the dereference pointer value and then we do is just incrementing the pointer by the size of the data type and keep printing out its dereferenced value
    // ++p is incrementing automatically by the array data size type
    for (auto* p = string; *p; ++p){
        cout << format("char is {}\n", *p);
    }
}
