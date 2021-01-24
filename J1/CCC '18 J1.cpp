#include <iostream>

int main()
{
    int Pnums[3];
    std::cin >> Pnums[0];
    std::cin >> Pnums[1];
    std::cin >> Pnums[2];
    std::cin >> Pnums[3];

    if ((Pnums[0] == 8 || Pnums[0] == 9) && (Pnums[3] == 8 || Pnums[3] == 9) && (Pnums[1] == Pnums[2])) 
    {
        std::cout << "ignore";
    }
    else
    {
        std::cout << "answer";
    }
}