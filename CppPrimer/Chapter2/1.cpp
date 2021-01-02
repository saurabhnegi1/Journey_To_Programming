#include <iostream>

int main(){
    std::cout << "Size of int: " << sizeof(int) << '\n';
        
    std::cout << "Size of long long: " << sizeof(long long) << '\n';

    std::cout << "Size of short: " << sizeof(short) << '\n';

    signed int x = -1;
    unsigned int y = -1;
    std::cout << "signed x{-1}: " << x << '\n';
    std::cout << "signed y{-1}: " << y << '\n';
    
    std::cout << "size of float: " << sizeof(float) << '\n';
    std::cout << "size of double: " << sizeof(double) << '\n';
    return 0;
}
