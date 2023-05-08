// # 04-mysolution

#include <format>
#include <iostream>

using std::cout;
using std::format;

// a byte is 8 bits
const size_t byte {8};

struct LibraryCard {
    
    const char* title{};
    const char* author{};
    const char* publisher{};
    const char* subject{};
    const char* isbn{};
    const char* oclc{};
    short int deweyDecimal1{};
    short int deweyDecimal2{};
    short int yearPublished{};
    short int yearAcquired{};
    short int quantityInStock{};
    
};

int main(){
    
    // Overall, to fix the error "ISO C++11 does not allow conversion from string literal to 'char *'", you can either declare the variable as a const char* or create a new char array and copy the string into it using a function like strcpy() or strncpy().
    
    LibraryCard lc1 {
        "The CGI Book", "William E. Weinman", "New Riders",
        "CGI (Computer network protocol)",
        "1562055712 9781562055714", "477166381",
        510, 78, 1996, 1997, 2
    };
    
    cout << format("size of short int is {} bits\n", sizeof(lc1.deweyDecimal1) * byte);
    
    cout << format("Title: {}\n", lc1.title);
    cout << format("Author: {}\n", lc1.author);
    cout << format("Publisher: {}\n", lc1.publisher);
    cout << format("Subject: {}\n", lc1.subject);
    cout << format("ISBN: {}\n", lc1.isbn);
    cout << format("WorldCat (OCLC): {}\n", lc1.oclc);
    // using two struct members at once
    cout << format("Dewey Decimal: {}.{}\n", lc1.deweyDecimal1, lc1.deweyDecimal2);
    cout << format("Year published: {}\n", lc1.yearPublished);
    cout << format("Year acquired: {}\n", lc1.yearAcquired);
    cout << format("Quantity: {}\n", lc1.quantityInStock);
    
}
