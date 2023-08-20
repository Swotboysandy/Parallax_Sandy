#include <iostream>

int main() {
    int x = 10;
    int y = x++;
    int z = ++x;
    std::cout << z ;
    std::cout << y ;
    std::cout << x ;
    return 0;
}