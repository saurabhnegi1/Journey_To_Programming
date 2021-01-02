#include <iostream>

int main(){
    bool b = 42;
    std::cout << "bool b: " << b << '\n';
    int i = b;
    std::cout << "int i: " << i << '\n';
    i = 3.14;
    std::cout << "int i: " << i << '\n';
    double pi = i;
    std::cout << "double pi: " << pi << '\n';
    unsigned char c = -1; 
    std::cout << "unsigned char c: " << c << '\n';
    signed char c2 = 256; // overflow error
    std::cout << "signed char c2: " << c2 << '\n';
    return 0;
}
