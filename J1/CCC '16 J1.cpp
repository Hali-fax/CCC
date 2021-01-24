#include <iostream>

int main() 
{
    char game;
    int wincounter = 0;
    for (int i = 0; i < 6; i++) 
    {
        std::cin >> game;
        if (game == 'W') 
        {
            wincounter += 1;
        }
    }
    if (wincounter >=5) 
    {
        std::cout << 1;
    }
    else if (wincounter == 3 || wincounter == 4) 
    {
        std::cout << 2;
    }
    else if (wincounter == 1 || wincounter == 2) 
    {
        std::cout << 3;
    }
    else
    {
        std::cout << -1;
    }
    
}