#include <iostream>

int main()
{
    int S;
    int M;
    int L;

    std::cin >> S;
    std::cin >> M;
    std::cin >> L;

    int happiness = 1 * S + 2 * M + 3 * L;

    if (happiness >= 10) {
        std::cout << "happy";
    }
    else {
        std::cout << "sad";
    }
}