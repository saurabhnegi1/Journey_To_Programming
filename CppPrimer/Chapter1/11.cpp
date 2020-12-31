#include <iostream>

int main(){
    // only work if x is greater than y
    int x = 0, y = 0;
    std::cin >> x >> y;
    for(int i=x; i<=y; ++i)
        std::cout << i << " ";
    return 0;
}
