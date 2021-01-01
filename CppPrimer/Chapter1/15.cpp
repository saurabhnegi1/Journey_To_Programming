#include <iostream>

int main(){
    int x = 0, y = 0;
    // Revise version of Exercise 1.4
    std::cin >> x >> y;

    while(x!=y)
        if(x<y){
            std::cout << x << " ";
            ++x;
        }else{
            std::cout << y << " ";
            ++y;
        }
    return 0;
}
