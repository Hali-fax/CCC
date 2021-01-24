#include <iostream>

int main()
{
    int difference;
    int youngest;
    int middle;
    std::cin >> youngest;
    std::cin >> middle;

    difference = middle - youngest;
    std::cout << difference + middle;
}