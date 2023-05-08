// prime number
// danjiehu

#include<iostream>
#include<format>

using std::format;
using std::cout;

int main(){
    
    // candidate numbers: 2-99
    // divisor: all numbers smaller than candidate
    // prime_flag is true, print out; prime_flag is false, print nothing;
    
    for (int candidate = 2; candidate < 100; ++candidate) {
        
        bool prime_flag = true;
        
        for (int divisor = 2; divisor < candidate; ++divisor) {
            if (candidate%divisor == 0) {
                prime_flag = false;
                break;
            }
        }
        
        if (prime_flag) cout << format("{}\n", candidate);
        
    }
    
}
