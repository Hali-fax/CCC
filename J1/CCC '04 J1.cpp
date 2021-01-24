#include <iostream>
#include <math.h>

int main() {
    
    int squares;
    std::cin >> squares;
    std::cout << "The largest square has side length " << (trunc(sqrt(squares))) << ".";

}