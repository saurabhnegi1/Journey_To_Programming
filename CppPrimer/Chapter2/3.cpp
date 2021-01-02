#include <iostream>

int main(){
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl;
    //  int i will converted to unsigned before addition
    std::cout << u + i << std::endl;

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;
    
    std::cout << u2 - u1 << std::endl; // result will wrap around
}
