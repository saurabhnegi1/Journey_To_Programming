#include <iostream>

int main(){
    std::cout << "Enter two number : ";
    int v1 = 0, v2 = 0; 
    std::cin >> v1 >> v2;
    // only work if v2 is greater than v1 
    while(v1<=v2){
        std::cout << v1 << std::endl;
        ++v1;
    }
    return 0;    
}
